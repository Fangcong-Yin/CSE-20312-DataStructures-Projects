//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Creative Challenge 2: Fundemental.cpp
#include "../include/Quick.h"


int main(){
  //First test with integers
  int arr1[9] = {14,99,42,77,2,66,1,8,44};
  COUT<<"Initial is: ";
  printArr(arr1,9);
  QuickSort(arr1,9);
  COUT << "Final is: ";
  printArr(arr1,9);
  //Second test with char
  char arr2[19] = {'T','H','E','C','O','R','O','N','A','V','I','R','U','S','S','U','C','K','S'};
  COUT<<"Initial is: ";
  printArr(arr2,19);
  QuickSort(arr2,19);
  COUT << "Final is: ";
  printArr(arr2,19);

  //Third test with integers
  int arr3[8] = {22,13,33,44,-10,55,88,27};
  COUT<<"Initial is: ";
  printArr(arr3,8);
  QuickSort(arr3,8);
  COUT << "Final is: ";
  printArr(arr3,8);

  //Fourth test with chars
  char arr4[10] = {'N','o','t','r','e',' ','D','a','m','e'};
  COUT<<"Initial is: ";
  printArr(arr4,10);
  QuickSort(arr4,10);
  COUT << "Final is: ";
  printArr(arr4,10);
  //Fifth test with std::string
  std::string arr5[5] = {"Data","Structure","Creativity","Challenge","2"};
  COUT<<"Initial is: ";
  printArr(arr5,5);
  QuickSort(arr5,5);
  COUT << "Final is: ";
  printArr(arr5,5);
}
