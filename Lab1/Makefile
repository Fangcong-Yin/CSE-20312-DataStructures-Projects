#Author: Fangcong
#Email: fyin2@nd.edu

PP := g++
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)
#Make the object file and executable of Lab1a
Lab1aObjs := Lab1a.o

Lab1a: Lab1a.o
	$(PP) $(CXXFLAGS) -o Lab1a $(Lab1aObjs)
	./Lab1a

Lab1a.o: Lab1a.cpp
	$(PP) $(CXXFLAGS) -c Lab1a.cpp
#Make the object file and executable of Lab1b
Lab1bObjs := Lab1b.o

Lab1b: Lab1b.o
	$(PP) $(PQCFLAGS) -o Lab1b $(Lab1bObjs)
	./Lab1b

Lab1b.o: Lab1b.cpp
	$(PP) $(PQCFLAGS) -c Lab1b.cpp
#Make the object file and executable of Lab1c
Lab1cObjs := Lab1c.o

Lab1c: Lab1c.o
	$(PP) $(PQCFLAGS) -o Lab1c $(Lab1cObjs)
	./Lab1b

Lab1c.o: Lab1c.cpp
	$(PP) $(PQCFLAGS) -c Lab1c.cpp

all: Lab1a Lab1b Lab1c

clean :
	rm -rf *.o Lab1a Lab1b Lab1c
