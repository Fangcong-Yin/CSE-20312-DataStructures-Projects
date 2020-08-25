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


Lab2Objs := $(OBJ)/Lab2.o

#Create the executable for Lab2
Lab2: $(Lab2Objs)
	$(PP) $(PQCXX) -o $(EXE)/Lab2 $(Lab2Objs)
	$(EXE)/./Lab2
#Create the object file for Lab2
$(OBJ)/Lab2.o: $(SRC)/Lab2.cpp
	$(PP) $(PQCXX) -c $(SRC)/Lab2.cpp -o $@

initialize:
	mkdir $(OBJ) $(EXE)

clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
