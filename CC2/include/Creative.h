//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Creative Challenge 2

#ifndef Creative
#define Creative
#include "Quick.h"
//Source: Quora answer by Larry Pyeatt (https://www.quora.com/What-are-some-practical-applications-of-quicksort)
//This function can read in multiple student names (in std::string) and sort them in alphabetical order
void sortRoster(){
  //Read in the size of the roster
  COUT << "How many students are there on the roster? Please enter an integer: " << ENDL;
  int num;
  std::cin>>num;
  //Create an array to store the input names
  std::string* arr=new std::string[num];
  for (int i =0; i< num;++i){
    //Use a for loop to iteratively read in names
          COUT << "Please enter the name of the number "<< i+1 << " student:" << ENDL;
          std::string name;
          std::cin>>name;
          arr[i] = name;
  }
  //Print the initial roster
  COUT << "Initial Roster: ";
  printArr(arr,num);
  //Use quicksort
  QuickSort(arr,num);
  //Print the sorted roster
    COUT << "Sorted Roster in Alphabetical Order: ";
  printArr(arr,num);
  delete[] arr;
}

#endif
