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

#Make the fundamental program
FundamentalObjs := $(OBJ)/Fundamental.o

Fundamental: $(FundamentalObjs)
	$(PP) $(PQCXX) -o $(EXE)/Fundamental $(FundamentalObjs)
	$(EXE)/./Fundamental


$(OBJ)/Fundamental.o: $(SRC)/Fundamental.cpp
	$(PP) $(PQCXX) -c $(SRC)/Fundamental.cpp -o $@

#Make the creative program
CreativeObjs := $(OBJ)/Creative.o

Creative: $(CreativeObjs)
	$(PP) $(PQCXX) -o $(EXE)/Creative $(CreativeObjs)
	$(EXE)/./Creative

$(OBJ)/Creative.o: $(SRC)/Creative.cpp
	$(PP) $(PQCXX) -c $(SRC)/Creative.cpp -o $@

initialize:
	mkdir 