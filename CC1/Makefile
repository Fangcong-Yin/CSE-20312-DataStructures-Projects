#Author: Fangcong
#Email: fyin2@nd.edu

PP := g++
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)
#Make the object file for Creative and Binomial
CreativeObjs := Creative.o
BinomialObjs := Binomial.o

#Make the files for the creative application
Creative: Creative.o Binomial.o Pascal.o
	$(PP) $(PQCXX) -o Creative $(CreativeObjs) $(BinomialObjs) $(PascalObjs)
	./Creative
Creative.o: Creative.cpp
	$(PP) $(PQCXX) -c Creative.cpp

Binomial.o: Binomial.cpp
	$(PP) $(PQCXX) -c Binomial.cpp


#Make the files for the fundamental
FundamentalObjs := Fundamental.o

Fundamental: Fundamental.o Pascal.o
	$(PP) $(PQCXX) -o Fundamental $(FundamentalObjs) $(PascalObjs)
	./Fundamental

Fundamental.o: Fundamental.cpp
	$(PP) $(PQCXX) -c Fundamental.cpp
#Make the object file and executable of Lab1b
PascalObjs := Pascal.o

Pascal: Pascal.o
	$(PP) $(PQCXX) -o Pascal $(PascalObjs)
	./Pascal

Pascal.o: Pascal.cpp
	$(PP) $(PQCXX) -c Pascal.cpp

all: Creative Fundamental

clean :
	rm -rf *.o Fundamental Pascal Creative Binomial
