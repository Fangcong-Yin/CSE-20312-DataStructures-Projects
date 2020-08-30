//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Creative Challenge 2: Quick Sort header file
#ifndef QUICK
#define QUICK

#include <iostream>
#include <cstdlib>
#include <string>

#define COUT std::cout
#define ENDL std::endl

//A function used to swap the values
template<class T>
void swap(T* arr,int index1,int index2){
  T temp = arr[index1];
  arr[index1]=arr[index2];
  arr[index2]=temp;
}
//A function used to print the values in an array
template<class T>
void printArr(T* arr,int length){
  for (int i =0; i<length;++i){
    COUT << arr[i] << " ";
  }
  COUT << ENDL;
}
//A function to sort each subarray
template<class T>
int sort(T* arr,int low, int high, int item_index){
  //Left pointer starts from the leftmost
  int i = low;
  //right pointer starts from the rightmost
  int j = high;
  while(j>i){
    //Right pointer decreases if it is greater than arr[item_index]
    while((arr[j] > arr[item_index])||((arr[i]==arr[j])&&i!=j)){
      --j;
    }
    //Left pointer increases if it is smaller than arr[item_index]
    while((arr[i] < arr[item_index])||((arr[i]==arr[j])&&i!=j)){
      ++i;
    }
    //Stop when their cross
    if(j<=i){
      break;
    }
    //Swap the value at i and j if they stop and they don't cross
    swap(arr,i,j);
  }
  //swap the value at item_index and j
  swap(arr,item_index,j);
  return j;

}

//A recursive function to partition the array into multiple subarrays
template<class T>
void partition(T* arr, int low, int high){
   if(low>=high){
     return;
   }else{
     //Generate a random index to be the partitioned item
     std::srand((unsigned int)time(NULL));
     int item_index = std::rand()%(high-low)+low;
     //Put the item at the leftmost position
     swap(arr,low,item_index);
     int new_item_index = sort(arr,low,high,low);
     //Left partition
     partition(arr,low,new_item_index);
     //Right partition
     partition(arr,new_item_index+1,high);
   }
}

//Helper method to invoke quicksort
template<class T>
void QuickSort(T* arr,int length){
  partition(arr,0,length-1);
}

#endif
