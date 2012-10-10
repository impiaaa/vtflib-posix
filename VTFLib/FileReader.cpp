/*
 * VTFLib
 * Copyright (C) 2005-2010 Neil Jedrzejewski & Ryan Gregg

 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later
 * version.
 */

#include "VTFLib.h"
#include "FileReader.h"
#include <sys/stat.h>

using namespace VTFLib;
using namespace VTFLib::IO::Readers;

CFileReader::CFileReader(const vlChar *cFileName)
{
	this->hFile = NULL;

	this->cFileName = new vlChar[strlen(cFileName) + 1];
	strcpy(this->cFileName, cFileName);
}

CFileReader::~CFileReader()
{
	this->Close();

	delete []this->cFileName;
}

vlBool CFileReader::Opened() const
{
	return this->hFile != NULL;
}

vlBool CFileReader::Open()
{
	this->Close();

	this->hFile = fopen(this->cFileName, "r");

	if(this->hFile == NULL)
	{
		this->hFile = NULL;

		LastError.Set("Error opening file.", vlTrue);

		return vlFalse;
	}

	return vlTrue;
}

vlVoid CFileReader::Close()
{
	if(this->hFile != NULL)
	{
		fclose(this->hFile);
		this->hFile = NULL;
	}
}

vlUInt CFileReader::GetStreamSize() const
{
	if(this->hFile == NULL)
	{
		return 0;
	}

	struct stat filestatus;
	stat(this->cFileName, &filestatus);
	
	return filestatus.st_size;
}

vlUInt CFileReader::GetStreamPointer() const
{
	if(this->hFile == NULL)
	{
		return 0;
	}

	return ftell(this->hFile);
}

vlUInt CFileReader::Seek(vlLong lOffset, vlUInt uiMode)
{
	if(this->hFile == NULL)
	{
		return 0;
	}

	return fseek(this->hFile, lOffset, uiMode);
}

vlBool CFileReader::Read(vlChar &cChar)
{
	if(this->hFile == NULL)
	{
		return vlFalse;
	}

	vlULong ulBytesRead = 0;

	ulBytesRead = fread(&cChar, 1, 1, this->hFile);

	return ulBytesRead == 1;
}

vlUInt CFileReader::Read(vlVoid *vData, vlUInt uiBytes)
{
	if(this->hFile == NULL)
	{
		return 0;
	}

	vlULong ulBytesRead = 0;

	return fread(vData, 1, uiBytes, this->hFile);
}