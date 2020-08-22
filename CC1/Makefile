#Author: Fangcong
#Email: fyin2@nd.edu

PP := g++
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)
#Make the object file and executable of Lab1a
CreativeObjs := Creative.o
BinomialObjs := Binomial.o

Creative: Creative.o Binomial.o Pascal.o
	$(PP) $(CXXFLAGS) -o Creative $(CreativeObjs) $(BinomialObjs) $(PascalObjs)
	./Creative
Creative.o: Creative.cpp
	$(PP) $(CXXFLAGS) -c Creative.cpp

Binomial.o: Binomial.cpp
	$(PP) $(CXXFLAGS) -c Binomial.cpp



FundamentalObjs := Fundamental.o

Fundamental: Fundamental.o Pascal.o
	$(PP) $(CXXFLAGS) -o Fundamental $(FundamentalObjs) $(PascalObjs)
	./Fundamental

Fundamental.o: Fundamental.cpp
	$(PP) $(CXXFLAGS) -c Fundamental.cpp
#Make the object file and executable of Lab1b
PascalObjs := Pascal.o

Pascal: Pascal.o
	$(PP) $(PQCFLAGS) -o Pascal $(PascalObjs)
	./Pascal

Pascal.o: Pascal.cpp
	$(PP) $(PQCFLAGS) -c Pascal.cpp

all: Creative Fundamental

clean :
	rm -rf *.o Fundamental Pascal Creative Binomial
