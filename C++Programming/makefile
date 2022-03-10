application_name := C++Programming
build_debug := ../C++Programming/build/debug
build_objects := ../C++Programming/build/objects
header := ../C++Programming/header
source := ../C++Programming/source
flags := -O3 -Wall -std=c++1z

objects := main.o printing.o space.o pointers.o variable.o filereader.o

build-debug: $(objects)
	g++ -s $(build_objects)/main.o \
	       $(build_objects)/printing.o \
				 $(build_objects)/space.o \
				 $(build_objects)/pointers.o \
				 $(build_objects)/variable.o \
				 $(build_objects)/filereader.o \
			-o $(build_debug)/$(application_name) \
			$(flags)

main.o:
	g++ -c $(source)/main.cpp \
			-o $(build_objects)/main.o

printing.o : $(header)/printing.h
	g++ -c $(source)/printing.cpp \
			-o $(build_objects)/printing.o

space.o : $(header)/space.h
	g++ -c $(source)/space.cpp \
			-o $(build_objects)/space.o

pointers.o : $(header)/pointers.h
	g++ -c $(source)/pointers.cpp \
			-o $(build_objects)/pointers.o

variable.o: $(header)/variable.h
	g++ -c $(source)/variable.cpp \
			-o $(build_objects)/variable.o

filereader.o: $(header)/filereader.h
	g++ -c $(source)/filereader.cpp \
			-o $(build_objects)/filereader.o

run-debug:
	$(build_debug)/$(application_name)
