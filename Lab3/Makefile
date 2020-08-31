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


Lab3Objs := $(OBJ)/Lab3.o

#Create the executable for Lab3
Lab3: $(Lab3Objs)
	$(PP) $(PQCXX) -o $(EXE)/Lab3 $(Lab3Objs)
	$(EXE)/./Lab3
#Create the object file for Lab3
$(OBJ)/Lab3.o: $(SRC)/Anagram.cpp
	$(PP) $(PQCXX) -c $(SRC)/Anagram.cpp -o $@

initialize:
	mkdir $(OBJ) $(EXE)

clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
