#Build FILE_SAVANT dynamic module for LINUX
#
#There is no tool or dependency needed on a typical linux
#installation. To build the simple.so and simple change your
#directory to the modules/dynamic_modules/consoler/ folder 
#
#user $ cd modules/dynamic_modules/file_savant/
#
#This is to ensure That the output generated are in 
#appropriate `dist` folder in modules folder. 
#Execute the below command in your command prompt of bash
#
#simple/src/makefiles/file_savant/ $ make -f Makefile-Linux.mk

# Flags
CFLAGS= -c -fpic -g -w
LFlAGS= -lm -ldl
LDFLAGS= "-Wl,-rpath,./ ../../bin/ $(DESTDIR)$(PREFIX)/lib/ ~/lib/,--no-as-needed"

# Macros
CND_PLATFORM=
CND_DLIB_EXT=so
CND_BUILDDIR=build
CND_DISTDIR =../dist

# Object Directory
OBJECTDIR=$(CND_DISTDIR)/$(CND_BUILDDIR)/$(CND_PLATFORM)

# Simple Object Directory
SIMPLE_OBJECTDIR=../../../simple/dist/$(CND_BUILDDIR)/$(CND_PLATFORM)

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/file_savant.o

# Simple Object Files
SIMPLE_OBJECTFILES = \
	$(SIMPLE_OBJECTDIR)/simple_api.o 
	
# Link Libraries and Options
LDLIBSOPTIONS=-Lsimple.so

${CND_DISTDIR}/${CND_PLATFORM}/file_savant.${CND_DLIB_EXT}: $(OBJECTFILES) $(SIMPLE_OBJECTFILES)
	$(CC) -shared $(ARC_FLAG) -o $(CND_DISTDIR)/$(CND_PLATFORM)/file_savant.$(CND_DLIB_EXT) $(SIMPLE_OBJECTFILES) $(OBJECTFILES) 

$(OBJECTDIR)/file_savant.o: file_savant.c
	mkdir -p $(OBJECTDIR)
	$(CC) $(ARC_FLAG) $(CFLAGS) file_savant.c
	mv file_savant.o $(OBJECTDIR)

clean:
	@- $(RM) $(OBJECTDIR)/*.o
	@- $(RM) $(program_OBJS)

distclean: clean

#This Makefile-Windows.mk was written in adaptation to the standard
#method of writing makefiles
#
#If this make file does not work on your LINUX PC feel free to 
#write your own Makefile and send us a pull request at 
#https://github.com/simple-lang/modules . Your make file must follow 
#the below format for request to be accepted
#
#File-Name : Makefile-Linux-{distro}.mk
#
#e.g Makefile-Linux-mint-cinnamon.mk
#
#looking forward to your contribution
#Thank You
