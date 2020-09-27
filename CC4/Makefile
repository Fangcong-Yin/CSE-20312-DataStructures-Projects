#Author: Fangcong Yin
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


Prob1Objs := $(OBJ)/Prob1.o

Prob1: $(Prob1Objs)
	$(PP) $(PQCXX) -o $(EXE)/Prob1 $(Prob1Objs)
	$(EXE)/./Prob1
#Create the object file for Problem1
$(OBJ)/Prob1.o: $(SRC)/Prob1.cpp
	$(PP) $(PQCXX) -c $(SRC)/Prob1.cpp -o $@

Prob2Objs := $(OBJ)/Prob2.o

Prob2: $(Prob2Objs)
	$(PP) $(PQCXX) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2
#Create the object file for Problem2
$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp
	$(PP) $(PQCXX) -c $(SRC)/Prob2.cpp -o $@

initialize:
	mkdir $(OBJ) $(EXE)
all: Prob1 Prob2
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
