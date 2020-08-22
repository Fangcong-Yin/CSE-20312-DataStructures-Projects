//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Header file for Pascal Triangle
#ifndef PASCAL
#define PASCAL

#include <iostream>
#include <cstdlib>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl

//Function to create a pascal triangle and store the values in a int**
int** createPascal(int row);
//Function to print the pascal triangle
void printPascal(int** pascal,int row);
//Get the value of a specific position in pascal triangle
void getPascal(int** pascal,int row,int col);
#endif
