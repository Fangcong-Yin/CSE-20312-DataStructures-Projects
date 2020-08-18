//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Lab01 Assignment

#include "Lab1.h"

struct Lab1b{
  long unsigned int theInt;
  float theFloat;
  double theDbl;
  char theChar;

  Lab1b(long unsigned int IntIn, float floatIn, double DblIn,char chIn )
  : theInt( IntIn), theFloat( floatIn ), theDbl( DblIn ),theChar(chIn) {}

//Accessor methods for each of the member variables
long unsigned int getInt(){
  return this -> theInt;
}
float getFloat(){
  return this -> theFloat;
}
double getDouble(){
  return this -> theDbl;
}
char getChar(){
  return this -> theChar;
}

//Print each element in the node
void printNodeValues(){

  COUT << "-----------------------------" << ENDL;
  COUT << "Initial address of 'this': " << this << ENDL << ENDL;

  COUT << "Long unsigned int:  " << this->theInt << "\t at address " << &(this->theInt) << ENDL;
  COUT << "Float:  " << this->theFloat << "\t at address " << (double*)&(this->theFloat) << ENDL;
  COUT << "Double:  " << this->theDbl << "\t at address " << &(this->theDbl) << ENDL;
  //I use (void*)&(this->theChar) because &(this->theChar) didn't print out the address correctly
  COUT << "Char:  " << this->theChar << "\t at address " << (void*)&(this->theChar) << ENDL;

}

};

int main(void){
  long unsigned int a;
  float b;
  double c;
  char d;
  //Use callByRef from Lab1.h to set the four variables
  callByRef(a,b,c,d);
  COUT << sizeof(b) << ENDL << ENDL;
  //Use the variables to construct a node object
  Lab1b node(a,b,c,d);
  //Print the values of the node object
  node.printNodeValues();
  return 0;
}
