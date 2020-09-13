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


FundObjs := $(OBJ)/Fundamental.o

#Create the executable for Fundamental
Fundamental: $(FundObjs)
	$(PP) $(PQCXX) -o $(EXE)/Fundamental $(FundObjs)
	$(EXE)/./Fundamental
#Create the object file for Fundamental
$(OBJ)/Fundamental.o: $(SRC)/Fundamental.cpp
	$(PP) $(PQCXX) -c $(SRC)/Fundamental.cpp -o $@

CreativeObjs := $(OBJ)/Creative.o
BookObjs := $(OBJ)/BookData.o

#Create the executable for Creative Application
Creative: $(CreativeObjs) $(BookObjs)
	$(PP) $(PQCXX) -o $(EXE)/Creative $(CreativeObjs) $(BookObjs)
	$(EXE)/./Creative
#Create the object file for Creative Application

$(OBJ)/Creative.o: $(SRC)/Creative.cpp
	$(PP) $(PQCXX) -c $(SRC)/Creative.cpp -o $@

$(OBJ)/BookData.o: $(SRC)/BookData.cpp
	$(PP) $(PQCXX) -c $(SRC)/BookData.cpp -o $@


initialize:
	mkdir $(OBJ) $(EXE)
all: Fundamental Creative
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
