//Author: Fnagcong Yin
//Email: fyin2@nd.edu
//CC3: Fundamental.cpp

#include "../include/DoubleHash.h"

#define COUT std::cout
#define ENDL std::endl
int main(){
  //Create a single hash table and a double hash table
  HashTable<int,std::string> LinearTable1;
  DoubleHash<int,std::string> DoubleTable1;
  //First test case with 3 elements
  LinearTable1.insert({76,"First"});
  LinearTable1.insert({40,"Second"});
  LinearTable1.insert({48,"Third"});
  COUT << LinearTable1 << ENDL;
  DoubleTable1.insert({76,"First"});
  DoubleTable1.insert({40,"Second"});
  DoubleTable1.insert({48,"Third"});
  COUT << DoubleTable1 << ENDL;
  //Second test case with two elements
  LinearTable1.insert({5,"Fourth"});
  LinearTable1.insert({55,"Fifth"});
  COUT << LinearTable1 << ENDL;
  DoubleTable1.insert({5,"Fourth"});
  DoubleTable1.insert({55,"Fifth"});
  COUT << DoubleTable1 << ENDL;
  //Thrid test case with two elements
  LinearTable1.insert({10,"Sixth"});
  LinearTable1.insert({18,"Seventh"});
  COUT << LinearTable1 << ENDL;
  DoubleTable1.insert({10,"Sixth"});
  DoubleTable1.insert({18,"Seventh"});
  COUT << DoubleTable1 << ENDL;
  //Fourth test case with two elements
  LinearTable1.insert({64,"Ninth"});
  LinearTable1.insert({44,"Eighth"});
  COUT << LinearTable1 << ENDL;
  DoubleTable1.insert({64,"Ninth"});
  DoubleTable1.insert({44,"Eighth"});
  COUT << DoubleTable1 << ENDL;
}
