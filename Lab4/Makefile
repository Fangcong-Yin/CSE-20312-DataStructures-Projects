#Author: Fangcong
#Email: fyin2@nd.edu

PP := g++
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)

#List the directories
INC := include
SRC := src
OBJ := obj
EXE := exe

#Make the MergeInt program
Lab4Objs := $(OBJ)/Lab4.o

Lab4: $(Lab4Objs)
	$(PP) $(PQCXX) -o $(EXE)/Lab4 $(Lab4Objs)
	$(EXE)/./Lab4


$(OBJ)/Lab4.o: $(SRC)/Lab4.cpp
	$(PP) $(PQCXX) -c $(SRC)/Lab4.cpp -o $@

all: Lab4

initialize:
	mkdir $(OBJ) $(EXE)

clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
