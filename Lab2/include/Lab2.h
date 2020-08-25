//Name: Fangcong Yin
//Email: fyin2@nd.edu
//Header file for Lab2
#ifndef LAB2
#define LAB2

#include <iostream>
#include <string>
#include <vector>

#define COUT std::cout
#define ENDL std::endl

//A function to print out all values in a dynamic array
template <class T>
void printArr(std::vector<T>& arr, long unsigned int end){
  if(end ==0){
    COUT << "List is empty!" << ENDL;
    return;
  }
  COUT << "Array to Test for LIS: ";
  for (long unsigned int i =0; i<end; ++i){
    COUT << arr[i] << " ";
  }
  COUT << ENDL;
}

//A function that uses binary search to find out where the given elem needs to be inserted into the temp array
template <class T>
long unsigned int findPos(std::vector<T>& temp, long unsigned int end, T elem){
  //If every element in temp is smaller than elem, push_back elem to the end of the array
  long unsigned int pos = end+1;
  long unsigned int start = 0;
  while(start < end){
    //Calculate the midpoint
    long unsigned int mid = (start+end)/2;
    if(temp[mid]<=elem){
      start=mid+1;
    }else{
      //If the first element in temp that is greater than elem, return this position.
      return mid;
    }
  }
  return pos;
}

//The function is used to find the max length of increasing subarray
template <class T>
long unsigned int findLength(std::vector<T>& arr, long unsigned int end ){
  //If the array is empty, return 0
  if(end == 0){
    return 0;
  }
  //The initial max len is 1
  long unsigned int len = 1;
  //Create a temporary dynamic array to store a sequence that has the largest element in the array till i
  std::vector<T> temp(1);
  temp[0] = arr[0];
  for (long unsigned int i =1; i<end;++i){
    //Find the position where arr[i] can be inserted into temp
    long unsigned int pos = findPos(temp,temp.size(),arr[i]);
    if(pos > temp.size()){
      //If every element in temp is smaller than elem, push_back elem to the end of the array
      temp.push_back(arr[i]);
    }
    else{
      temp[pos] = arr[i];
    }
    if(temp.size()>len){
      //Update the max length
      len = temp.size();
    }
  }
  return len;
}
#endif
