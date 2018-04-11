program_NAME := simple
program_LIBRARY := simple.so
program_C_SRCS := $(wildcard ../sources/*.c)
program_CXX_SRCS := $(wildcard ../sources/*.cpp)
program_C_OBJS := .${program_C_SRCS:.c=.o}
program_CXX_OBJS := ${program_CXX_SRCS:.cpp=.o}
program_OBJS := ../dist/build/$(program_C_OBJS) $(program_CXX_OBJS)
program_CFLAGS := -c -fpic -g
program_LFLAGS := -lm -ldl
LDFLAGS			= "-Wl,-rpath,../dist"

CFLAGS= -c -fpic -g
LFlAG= -lm -ldl
LDFLAGS= "-Wl,-rpath,../dist/"

CND_PLATFORM=
CND_DLIB_EXT=so
CND_BUILDDIR=build
CND_DISTDIR =../dist
CLEAN_DEBUGDIR=../../../s0.3.302-debug
BINARYDIR=bin
SOURCE_DIR=../sources

OBJECTDIR=$(CND_DISTDIR)/$(CND_BUILDDIR)/$(CND_PLATFORM)

OBJECTFILES= \
	$(OBJECTDIR)/simple_api.o \
	$(OBJECTDIR)/simple_codegen.o \
	$(OBJECTDIR)/simple_expr.o \
	${OBJECTDIR}/simple_hashtable.o \
	${OBJECTDIR}/simple_item.o \
	${OBJECTDIR}/simple_list.o \
	${OBJECTDIR}/simple_misc.o \
	${OBJECTDIR}/simple_parser.o \
	${OBJECTDIR}/simple_scanner.o \
	${OBJECTDIR}/simple_state.o \
	${OBJECTDIR}/simple_stmt.o \
	${OBJECTDIR}/simple_string.o \
	${OBJECTDIR}/simple_vm.o \
	${OBJECTDIR}/simple_vmblock.o \
	${OBJECTDIR}/simple_vmdll.o \
	${OBJECTDIR}/simple_vmexpr.o \
	${OBJECTDIR}/simple_vmgc.o \
	${OBJECTDIR}/simple_vmlists.o \
	${OBJECTDIR}/simple_vmoop.o \
	${OBJECTDIR}/simple_vmperformance.o \
	${OBJECTDIR}/simple_vmstackvars.o \
	${OBJECTDIR}/simple_vmstate.o \
	${OBJECTDIR}/simple_vmstrindex.o \
	${OBJECTDIR}/simple_vmvars.o

$(CND_DISTDIR)/$(CND_PLATFORM)/simple: $(OBJECTFILES)
	$(CC) -shared -o $(CND_DISTDIR)/simple.$(CND_DLIB_EXT) $(OBJECTFILES)
	$(CC) $(LFLAGS) $(LDFLAGS) -o $(CND_DISTDIR)/simple ../simple.c $(CND_DISTDIR)/simple.$(CND_DLIB_EXT)

$(OBJECTDIR)/simple_api.o: $(SOURCE_DIR)/simple_api.c
	mkdir -p ../dist/build
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_api.c
	mv simple_api.o $(OBJECTDIR)

$(OBJECTDIR)/simple_codegen.o: $(SOURCE_DIR)/simple_codegen.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_codegen.c
	mv simple_codegen.o $(OBJECTDIR)

$(OBJECTDIR)/simple_expr.o: $(SOURCE_DIR)/simple_expr.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_expr.c
	mv simple_expr.o $(OBJECTDIR)

$(OBJECTDIR)/simple_hashtable.o: $(SOURCE_DIR)/simple_hashtable.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_hashtable.c
	mv simple_hashtable.o $(OBJECTDIR)

$(OBJECTDIR)/simple_item.o: $(SOURCE_DIR)/simple_item.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_item.c
	mv simple_item.o $(OBJECTDIR)

$(OBJECTDIR)/simple_list.o: $(SOURCE_DIR)/simple_list.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_list.c
	mv simple_list.o $(OBJECTDIR)

$(OBJECTDIR)/simple_misc.o: $(SOURCE_DIR)/simple_misc.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_misc.c
	mv simple_misc.o $(OBJECTDIR)

$(OBJECTDIR)/simple_parser.o: $(SOURCE_DIR)/simple_parser.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_parser.c
	mv simple_parser.o $(OBJECTDIR)

$(OBJECTDIR)/simple_scanner.o: $(SOURCE_DIR)/simple_scanner.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_scanner.c
	mv simple_scanner.o $(OBJECTDIR)

$(OBJECTDIR)/simple_state.o: $(SOURCE_DIR)/simple_state.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_state.c
	mv simple_state.o $(OBJECTDIR)

$(OBJECTDIR)/simple_stmt.o: $(SOURCE_DIR)/simple_stmt.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_stmt.c
	mv simple_stmt.o $(OBJECTDIR)

$(OBJECTDIR)/simple_string.o: $(SOURCE_DIR)/simple_string.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_string.c
	mv simple_string.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vm.o: $(SOURCE_DIR)/simple_vm.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vm.c
	mv simple_vm.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vmblock.o: $(SOURCE_DIR)/simple_vmblock.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vmblock.c
	mv simple_vmblock.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vmdll.o: $(SOURCE_DIR)/simple_vmdll.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vmdll.c
	mv simple_vmdll.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vmexpr.o: $(SOURCE_DIR)/simple_vmexpr.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vmexpr.c
	mv simple_vmexpr.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vmgc.o: $(SOURCE_DIR)/simple_vmgc.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vmgc.c
	mv simple_vmgc.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vmlists.o: $(SOURCE_DIR)/simple_vmlists.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vmlists.c
	mv simple_vmlists.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vmoop.o: $(SOURCE_DIR)/simple_vmoop.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vmoop.c
	mv simple_vmoop.o $(OBJECTDIR)

$(OBJECTDIR)/simple_vmperformance.o: $(SOURCE_DIR)/simple_vmperformance.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_vmperformance.c
	mv simple_vmperformance.o $(OBJECTDIR)

$(OBJECTDIR)/simple_stmt.o: $(SOURCE_DIR)/simple_stmt.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_stmt.c
	mv simple_stmt.o $(OBJECTDIR)

$(OBJECTDIR)/simple_stmt.o: $(SOURCE_DIR)/simple_stmt.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_stmt.c
	mv simple_stmt.o $(OBJECTDIR)

$(OBJECTDIR)/simple_stmt.o: $(SOURCE_DIR)/simple_stmt.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_stmt.c
	mv simple_stmt.o $(OBJECTDIR)

$(OBJECTDIR)/simple_stmt.o: $(SOURCE_DIR)/simple_stmt.c
	$(CC) $(CFLAGS) $(SOURCE_DIR)/simple_stmt.c
	mv simple_stmt.o $(OBJECTDIR)

clean:
	@- $(RM) $(OBJECTDIR)/*.o
	@- $(RM) $(program_OBJS)

distclean: clean
