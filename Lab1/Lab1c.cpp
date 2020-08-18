//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Lab01 Assignment

#include "Lab1.h"

class Lab1c{
  //Member variables are put in the private field to protect the data
private:
  long unsigned int theInt;
  float theFloat;
  double theDbl;
  char theChar;
public:
  Lab1c(long unsigned int IntIn, float floatIn, double DblIn,char chIn )
  : theInt( IntIn), theFloat( floatIn ), theDbl( DblIn ),theChar(chIn) {
    //The base address is printed within the constructor
    COUT << "Base address of 'this': " << this << ENDL << ENDL;
  }

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

//The friend <<operator that can be used to print the values of all member variables and their corresponding address
friend std::ostream& operator<<(std::ostream& output, const Lab1c&obj){
  output << "Long unsigned int:  " << obj.theInt << "\t at address " << &(obj.theInt) << ENDL;
  output << "Float:  " << obj.theFloat << "\t at address " << &(obj.theFloat) << ENDL;
  output << "Double:  " << obj.theDbl << "\t at address " << &(obj.theDbl) << ENDL;
  //I use (void*)&(this->theChar) because &(this->theChar) didn't print out the address correctly
  output << "Char:  " << obj.theChar << "\t at address " << (void*)&(obj.theChar) << ENDL;
  return output;
}
};

int main(void){
  long unsigned int a;
  float b;
  double c;
  char d;
  //Use callByRef from Lab1.h to set the four variables
  callByRef(a,b,c,d);
  //Use the variables to construct a node object
  Lab1c node(a,b,c,d);
  //Print the values of the node object
  COUT << node;
}
