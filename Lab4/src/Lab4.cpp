#include "../include/MergeInt.h"

int main(){
  VECTOR<VECTOR<int>> arr1={{1,3},{2,6},{8,10},{15,18}};
  COUT << "Input: ";
  printVector(arr1);
  VECTOR<VECTOR<int>> solution = merge(arr1);
  COUT << "Output: " ;
  printVector(solution);

  VECTOR<VECTOR<int>> arr2={{1,4},{4,5}};
  COUT << "Input: ";
  printVector(arr2);
  VECTOR<VECTOR<int>> solution2 = merge(arr2);
  COUT << "Output: " ;
  printVector(solution2);

  VECTOR<VECTOR<int>> arr3={{4,6},{1,9},{2,3},{10,11}};
  COUT << "Input: ";
  printVector(arr3);
  VECTOR<VECTOR<int>> solution3 = merge(arr3);
  COUT << "Output: " ;
  printVector(solution3);

  VECTOR<VECTOR<int>> arr4={{1,4},{7,8},{1,5},{6,8}};
  COUT << "Input: ";
  printVector(arr4);
  VECTOR<VECTOR<int>> solution4 = merge(arr4);
  COUT << "Output: " ;
  printVector(solution4);
}
