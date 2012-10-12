LIBSRC=$(wildcard VTFLib/*.cpp)
LIBOBJ=$(LIBSRC:.cpp=.o)
LIBOUT=lib/libvtf.a

BINSRC=$(wildcard VTFCmd/*.c)
BINOBJ=$(BINSRC:.c=.o)
BINOUT=bin/vtfcmd

# C++ compiler flags (-g -O2 -Wall)
CCFLAGS=-g -O2 -Wall
CFLAGS=-g -O2 -Wall

# compiler
CCC=g++
CC=gcc

# compile flags
LDFLAGS=-g

default: $(BINOUT)

$(BINOUT): $(LIBOUT) $(BINOBJ)
	$(CC) -o $@ $(BINOBJ) -lIL -Llib/ -lvtf -lc -lstdc++ -lm

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(LIBOUT): $(LIBOBJ)
	ar rcs $(LIBOUT) $(LIBOBJ)

.cpp.o:
	$(CCC) $(CCFLAGS) -c $< -o $@

clean: cleanlib cleanbin
	rm -f Makefile.bak

cleanlib:
	rm -f $(LIBOBJ) $(LIBOUT)

cleanbin:
	rm -f $(BINOBJ) $(BINOUT)

