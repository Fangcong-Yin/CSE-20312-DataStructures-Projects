#Fangcong Yin
#fyin2@nd.edu
#MakeFile for CC5
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make SLLTest
SorDLLTestObjs := $(OBJ)/SorDLLTest.o

SorDLLTest: $(SorDLLTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SorDLLTest $(SorDLLTestObjs)
	$(EXE)/./SorDLLTest 1 5 2 7 3 8 10 7 4 11 8 2
	$(EXE)/./SorDLLTest 1 2 2 3 2 2
$(OBJ)/SorDLLTest.o: $(SRC)/SorDLLTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/SorDLLTest.cpp -o $@



# Command: make SLLTest2
PQTestObjs := $(OBJ)/PQTest.o

PQTest: $(PQTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PQTest $(PQTestObjs)
	$(EXE)/./PQTest

$(OBJ)/PQTest.o: $(SRC)/PQTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/PQTest.cpp -o $@

CreativeObjs := $(OBJ)/Creative.o
PrinterObjs := $(OBJ)/Printer.o

	#Create the executable for Creative Application
Creative: $(CreativeObjs) $(PrinterObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Creative $(CreativeObjs) $(PrinterObjs)
	$(EXE)/./Creative

$(OBJ)/Creative.o: $(SRC)/Creative.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Creative.cpp -o $@

$(OBJ)/Printer.o: $(SRC)/Printer.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Printer.cpp -o $@

# Make all
all: SorDLLTest PQTest Creative


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize:
	mkdir obj exe

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
