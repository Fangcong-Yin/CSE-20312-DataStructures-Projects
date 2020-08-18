//Author: Fangcong
//Email: fyin2@nd.edu
//Lab01 Assignment

#include "Lab1.h"

//This function is used to print the four values in the node using pass by reference
void printNodeValues(void* reference){
  COUT << "-----------------------------" << ENDL;
  COUT << "Initial address of reference: " << reference << ENDL << ENDL;

  COUT << "Long unsigned int:  " << *((long unsigned int *)(reference)) << "\t at address " << reference << ENDL;

  reference += sizeof(long unsigned int);
  COUT << "Float:   " << *((float *)(reference)) << "\t at address " << reference << ENDL;

  reference += sizeof(float);
  COUT << "Double: " << *((double *)(reference)) << "\t at address " << reference << ENDL;

  reference+=sizeof(double);
  COUT << "Char: " << *((char *)(reference)) << "\t at address " << reference << ENDL;
  COUT << ENDL;
  COUT << "Final sddress of reference: " << reference << ENDL;
}

int main(void){
  //Create a pointer first
   long unsigned int nodeSize = sizeof(long unsigned int) + sizeof(float) + sizeof(double) + sizeof(char);
   void* node = malloc(nodeSize);
   //Pass the pointer into callByRef in Lab1.h to read the user inputs
   callByRef(*((long unsigned int*)node),*((float*)(node+sizeof(long unsigned int))),*((double*)(node+sizeof(long unsigned int) + sizeof(float))),*((char*)(node+sizeof(long unsigned int) + sizeof(float) + sizeof(double))));
   //Print the values in the pointer
   printNodeValues(node);
   return 0;
}
