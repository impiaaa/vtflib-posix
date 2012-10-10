/*
 * VTFCmd
 * Copyright (C) 2005-2010 Neil Jedrzejewski & Ryan Gregg
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#include "stdafx.h"

VTFImageFormat StringToImageFormat(const vlChar *cString)
{
	if(strcasecmp(cString, "RGBA8888") == 0)
	{
		return IMAGE_FORMAT_RGBA8888;
	}
	else if(strcasecmp(cString, "ABGR8888") == 0)
	{
		return IMAGE_FORMAT_ABGR8888;
	}
	else if(strcasecmp(cString, "RGB888") == 0)
	{
		return IMAGE_FORMAT_RGB888;
	}
	else if(strcasecmp(cString, "BGR888") == 0)
	{
		return IMAGE_FORMAT_BGR888;
	}
	else if(strcasecmp(cString, "RGB565") == 0)
	{
		return IMAGE_FORMAT_RGB565;
	}
	else if(strcasecmp(cString, "I8") == 0)
	{
		return IMAGE_FORMAT_I8;
	}
	else if(strcasecmp(cString, "IA88") == 0)
	{
		return IMAGE_FORMAT_IA88;
	}
	else if(strcasecmp(cString, "A8") == 0)
	{
		return IMAGE_FORMAT_A8;
	}
	else if(strcasecmp(cString, "RGB888_BLUESCREEN") == 0)
	{
		return IMAGE_FORMAT_RGB888_BLUESCREEN;
	}
	else if(strcasecmp(cString, "BGR888_BLUESCREEN") == 0)
	{
		return IMAGE_FORMAT_BGR888_BLUESCREEN;
	}
	else if(strcasecmp(cString, "ARGB8888") == 0)
	{
		return IMAGE_FORMAT_ARGB8888;
	}
	else if(strcasecmp(cString, "BGRA8888") == 0)
	{
		return IMAGE_FORMAT_BGRA8888;
	}
	else if(strcasecmp(cString, "DXT1") == 0)
	{
		return IMAGE_FORMAT_DXT1;
	}
	else if(strcasecmp(cString, "DXT3") == 0)
	{
		return IMAGE_FORMAT_DXT3;
	}
	else if(strcasecmp(cString, "DXT5") == 0)
	{
		return IMAGE_FORMAT_DXT5;
	}
	else if(strcasecmp(cString, "BGRX8888") == 0)
	{
		return IMAGE_FORMAT_BGRX8888;
	}
	else if(strcasecmp(cString, "BGR565") == 0)
	{
		return IMAGE_FORMAT_BGR565;
	}
	else if(strcasecmp(cString, "BGRX5551") == 0)
	{
		return IMAGE_FORMAT_BGRX5551;
	}
	else if(strcasecmp(cString, "BGRA4444") == 0)
	{
		return IMAGE_FORMAT_BGRA4444;
	}
	else if(strcasecmp(cString, "DXT1_ONEBITALPHA") == 0)
	{
		return IMAGE_FORMAT_DXT1_ONEBITALPHA;
	}
	else if(strcasecmp(cString, "BGRA5551") == 0)
	{
		return IMAGE_FORMAT_BGRA5551;
	}
	else if(strcasecmp(cString, "UV88") == 0)
	{
		return IMAGE_FORMAT_UV88;
	}
	else if(strcasecmp(cString, "UVWQ8888") == 0)
	{
		return IMAGE_FORMAT_UVWQ8888;
	}
	else if(strcasecmp(cString, "RGBA16161616F") == 0)
	{
		return IMAGE_FORMAT_RGBA16161616F;
	}
	else if(strcasecmp(cString, "RGBA16161616") == 0)
	{
		return IMAGE_FORMAT_RGBA16161616;
	}
	else if(strcasecmp(cString, "UVLX8888") == 0)
	{
		return IMAGE_FORMAT_UVLX8888;
	}
	else
	{
		return IMAGE_FORMAT_COUNT;
	}
}

VTFImageFlag StringToImageFlag(const vlChar *cString)
{
	if(strcasecmp(cString, "POINTSAMPLE") == 0)
	{
		return TEXTUREFLAGS_POINTSAMPLE;
	}
	else if(strcasecmp(cString, "TRILINEAR") == 0)
	{
		return TEXTUREFLAGS_TRILINEAR;
	}
	else if(strcasecmp(cString, "CLAMPS") == 0)
	{
		return TEXTUREFLAGS_CLAMPS;
	}
	else if(strcasecmp(cString, "CLAMPT") == 0)
	{
		return TEXTUREFLAGS_CLAMPT;
	}
	else if(strcasecmp(cString, "ANISOTROPIC") == 0)
	{
		return TEXTUREFLAGS_ANISOTROPIC;
	}
	else if(strcasecmp(cString, "HINT_DXT5") == 0)
	{
		return TEXTUREFLAGS_HINT_DXT5;
	}
	else if(strcasecmp(cString, "NORMAL") == 0)
	{
		return TEXTUREFLAGS_NORMAL;
	}
	else if(strcasecmp(cString, "NOMIP") == 0)
	{
		return TEXTUREFLAGS_NOMIP;
	}
	else if(strcasecmp(cString, "NOLOD") == 0)
	{
		return TEXTUREFLAGS_NOLOD;
	}
	else if(strcasecmp(cString, "MINMIP") == 0)
	{
		return TEXTUREFLAGS_MINMIP;
	}
	else if(strcasecmp(cString, "PROCEDURAL") == 0)
	{
		return TEXTUREFLAGS_PROCEDURAL;
	}
	else if(strcasecmp(cString, "RENDERTARGET") == 0)
	{
		return TEXTUREFLAGS_RENDERTARGET;
	}
	else if(strcasecmp(cString, "DEPTHRENDERTARGET") == 0)
	{
		return TEXTUREFLAGS_DEPTHRENDERTARGET;
	}
	else if(strcasecmp(cString, "NODEBUGOVERRIDE") == 0)
	{
		return TEXTUREFLAGS_NODEBUGOVERRIDE;
	}
	else if(strcasecmp(cString, "SINGLECOPY") == 0)
	{
		return TEXTUREFLAGS_SINGLECOPY;
	}
	else if(strcasecmp(cString, "NODEPTHBUFFER") == 0)
	{
		return TEXTUREFLAGS_NODEPTHBUFFER;
	}
	else if(strcasecmp(cString, "CLAMPU") == 0)
	{
		return TEXTUREFLAGS_CLAMPU;
	}
	else if(strcasecmp(cString, "VERTEXTEXTURE") == 0)
	{
		return TEXTUREFLAGS_VERTEXTEXTURE;
	}
	else if(strcasecmp(cString, "SSBUMP") == 0)
	{
		return TEXTUREFLAGS_SSBUMP;
	}
	else if(strcasecmp(cString, "BORDER") == 0)
	{
		return TEXTUREFLAGS_BORDER;
	}
	else
	{
		return TEXTUREFLAGS_COUNT;
	}
}

VTFMipmapFilter StringToMipmapFilter(const vlChar *cString)
{
	if(strcasecmp(cString, "POINT") == 0)
	{
		return MIPMAP_FILTER_POINT;
	}
	else if(strcasecmp(cString, "BOX") == 0)
	{
		return MIPMAP_FILTER_BOX;
	}
	else if(strcasecmp(cString, "TRIANGLE") == 0)
	{
		return MIPMAP_FILTER_TRIANGLE;
	}
	else if(strcasecmp(cString, "QUADRATIC") == 0)
	{
		return MIPMAP_FILTER_QUADRATIC;
	}
	else if(strcasecmp(cString, "CUBIC") == 0)
	{
		return MIPMAP_FILTER_CUBIC;
	}
	else if(strcasecmp(cString, "CATROM") == 0)
	{
		return MIPMAP_FILTER_CATROM;
	}
	else if(strcasecmp(cString, "MITCHELL") == 0)
	{
		return MIPMAP_FILTER_MITCHELL;
	}
	else if(strcasecmp(cString, "GAUSSIAN") == 0)
	{
		return MIPMAP_FILTER_GAUSSIAN;
	}
	else if(strcasecmp(cString, "SINC") == 0)
	{
		return MIPMAP_FILTER_SINC;
	}
	else if(strcasecmp(cString, "BESSEL") == 0)
	{
		return MIPMAP_FILTER_BESSEL;
	}
	else if(strcasecmp(cString, "HANNING") == 0)
	{
		return MIPMAP_FILTER_HANNING;
	}
	else if(strcasecmp(cString, "HAMMING") == 0)
	{
		return MIPMAP_FILTER_HAMMING;
	}
	else if(strcasecmp(cString, "BLACKMAN") == 0)
	{
		return MIPMAP_FILTER_BLACKMAN;
	}
	else if(strcasecmp(cString, "KAISER") == 0)
	{
		return MIPMAP_FILTER_KAISER;
	}
	else
	{
		return MIPMAP_FILTER_COUNT;
	}
}

VTFSharpenFilter StringToSharpenFilter(const vlChar *cString)
{
	if(strcasecmp(cString, "NONE") == 0)
	{
		return SHARPEN_FILTER_NONE;
	}
	else if(strcasecmp(cString, "NEGATIVE") == 0)
	{
		return SHARPEN_FILTER_NEGATIVE;
	}
	else if(strcasecmp(cString, "LIGHTER") == 0)
	{
		return SHARPEN_FILTER_LIGHTER;
	}
	else if(strcasecmp(cString, "DARKER") == 0)
	{
		return SHARPEN_FILTER_DARKER;
	}
	else if(strcasecmp(cString, "CONTRASTMORE") == 0)
	{
		return SHARPEN_FILTER_CONTRASTMORE;
	}
	else if(strcasecmp(cString, "CONTRASTLESS") == 0)
	{
		return SHARPEN_FILTER_CONTRASTLESS;
	}
	else if(strcasecmp(cString, "SMOOTHEN") == 0)
	{
		return SHARPEN_FILTER_SMOOTHEN;
	}
	else if(strcasecmp(cString, "SHARPENSOFT") == 0)
	{
		return SHARPEN_FILTER_SHARPENSOFT;
	}
	else if(strcasecmp(cString, "SHARPENMEDIUM") == 0)
	{
		return SHARPEN_FILTER_SHARPENMEDIUM;
	}
	else if(strcasecmp(cString, "SHARPENSTRONG") == 0)
	{
		return SHARPEN_FILTER_SHARPENSTRONG;
	}
	else if(strcasecmp(cString, "FINDEDGES") == 0)
	{
		return SHARPEN_FILTER_FINDEDGES;
	}
	else if(strcasecmp(cString, "CONTOUR") == 0)
	{
		return SHARPEN_FILTER_CONTOUR;
	}
	else if(strcasecmp(cString, "EDGEDETECT") == 0)
	{
		return SHARPEN_FILTER_EDGEDETECT;
	}
	else if(strcasecmp(cString, "EDGEDETECTSOFT") == 0)
	{
		return SHARPEN_FILTER_EDGEDETECTSOFT;
	}
	else if(strcasecmp(cString, "EMBOSS") == 0)
	{
		return SHARPEN_FILTER_EMBOSS;
	}
	else if(strcasecmp(cString, "MEANREMOVAL") == 0)
	{
		return SHARPEN_FILTER_MEANREMOVAL;
	}
	else if(strcasecmp(cString, "UNSHARP") == 0)
	{
		return SHARPEN_FILTER_UNSHARP;
	}
	else if(strcasecmp(cString, "XSHARPEN") == 0)
	{
		return SHARPEN_FILTER_XSHARPEN;
	}
	else if(strcasecmp(cString, "WARPSHARP") == 0)
	{
		return SHARPEN_FILTER_WARPSHARP;
	}
	else
	{
		return SHARPEN_FILTER_COUNT;
	}
}

VTFKernelFilter StringToKernelFilter(const vlChar *cString)
{
	if(strcasecmp(cString, "4X") == 0)
	{
		return KERNEL_FILTER_4X;
	}
	else if(strcasecmp(cString, "3X3") == 0)
	{
		return KERNEL_FILTER_3X3;
	}
	else if(strcasecmp(cString, "5X5") == 0)
	{
		return KERNEL_FILTER_5X5;
	}
	else if(strcasecmp(cString, "7X7") == 0)
	{
		return KERNEL_FILTER_7X7;
	}
	else if(strcasecmp(cString, "9X9") == 0)
	{
		return KERNEL_FILTER_9X9;
	}
	else if(strcasecmp(cString, "DUDV") == 0)
	{
		return KERNEL_FILTER_DUDV;
	}
	else
	{
		return KERNEL_FILTER_COUNT;
	}
}

VTFHeightConversionMethod StringToHeightConversionMethod(const vlChar *cString)
{
	if(strcasecmp(cString, "ALPHA") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_ALPHA;
	}
	else if(strcasecmp(cString, "AVERAGERGB") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_AVERAGE_RGB;
	}
	else if(strcasecmp(cString, "BIASEDRGB") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_BIASED_RGB;
	}
	else if(strcasecmp(cString, "RED") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_RED;
	}
	else if(strcasecmp(cString, "GREEN") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_GREEN;
	}
	else if(strcasecmp(cString, "BLUE") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_BLUE;
	}
	else if(strcasecmp(cString, "MAXRGB") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_MAX_RGB;
	}
	else if(strcasecmp(cString, "COLORSPACE") == 0)
	{
		return HEIGHT_CONVERSION_METHOD_COLORSPACE;
	}
	else
	{
		return HEIGHT_CONVERSION_METHOD_COUNT;
	}
}

VTFNormalAlphaResult StringToNormalAlphaResult(const vlChar *cString)
{
	if(strcasecmp(cString, "NOCHANGE") == 0)
	{
		return NORMAL_ALPHA_RESULT_NOCHANGE;
	}
	else if(strcasecmp(cString, "HEIGHT") == 0)
	{
		return NORMAL_ALPHA_RESULT_HEIGHT;
	}
	else if(strcasecmp(cString, "BLACK") == 0)
	{
		return NORMAL_ALPHA_RESULT_BLACK;
	}
	else if(strcasecmp(cString, "WHITE") == 0)
	{
		return NORMAL_ALPHA_RESULT_WHITE;
	}
	else
	{
		return NORMAL_ALPHA_RESULT_COUNT;
	}
}


VTFResizeMethod StringToResizeMethod(const vlChar *cString)
{
	if(strcasecmp(cString, "NEAREST") == 0)
	{
		return RESIZE_NEAREST_POWER2;
	}
	else if(strcasecmp(cString, "BIGGEST") == 0)
	{
		return RESIZE_BIGGEST_POWER2;
	}
	else if(strcasecmp(cString, "SMALLEST") == 0)
	{
		return RESIZE_SMALLEST_POWER2;
	}
	else
	{
		return RESIZE_COUNT;
	}
}