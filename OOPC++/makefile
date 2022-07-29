projdir 					:= ..\OOPC++
application_name 	:= OOPC++
build_debug 			:= $(projdir)\build\debug
build_objects 		:= $(projdir)\build\objects
header 						:= $(projdir)\header
source 						:= $(projdir)\source
flags 						:= -O3 -Wall -std=c++1z -static-libstdc++ -static-libgcc
objects 					:= main.o oopcollection.o simpleclass.o classinheritance.o

build-debug: $(objects)
	g++ -s 	$(build_objects)/main.o \
					$(build_objects)/simpleclass.o \
					$(build_objects)/oopcollection.o \
					$(build_objects)/classinheritance.o \
			-o 	$(build_debug)/$(application_name) \
			$(flags)

main.o:
	g++ -c -I $(header) $(source)/main.cpp \
			-o $(build_objects)/main.o

oopcollection.o:
	g++ -c -I $(header) $(source)/oopcollection.cpp \
			-o $(build_objects)/oopcollection.o

simpleclass.o:
	g++ -c -I $(header) $(source)/simpleclass.cpp \
			-o $(build_objects)/simpleclass.o

classinheritance.o:
	g++ -c -I $(header) $(source)/classinheritance.cpp \
			-o $(build_objects)/classinheritance.o

test:
	$(build_debug)/$(application_name)

clean:
	del $(build_debug)\*.exe
	del $(build_objects)\*.o
