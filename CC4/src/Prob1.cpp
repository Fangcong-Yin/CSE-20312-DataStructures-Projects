//Fangcong Yin
//fyin2@nd.edu
//CC4 Problem 1

#include "../include/pacific.h"

int main()
{
    VECTOR<VECTOR<int> > arr1 = {
      {1,3,4,3,7},
       {2,2,3,4,4},
        {2,4,5,3,1},
        {6,7,5,4,5},
        {5,1,6,2,4}
    };
    getPosition(arr1);
    VECTOR<VECTOR<int> > arr2 = {
      {1,2,2,3},
       {3,2,3,4},
        {2,4,5,3},
        {6,7,1,4}
    };
    getPosition(arr2);
    VECTOR<VECTOR<int> > arr3 = {
      {2,2,2,5},
       {3,2,3,4},
        {2,4,4,5},
        {5,3,3,5}
    };
    getPosition(arr3);
    return 0;
}
