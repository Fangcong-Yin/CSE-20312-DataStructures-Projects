//Name: Fangcong Yin
//Email: fyin2@nd.edu
//CPP file for Lab2

#include "../include/Lab2.h"

int main(){
  //The first test case with integers
  std::vector <int> arr;
  long unsigned int len0 = findLength(arr,0);
  printArr(arr,0);
  COUT << "RESULT:" << len0 << ENDL;
  std::vector <int> arr1;
  arr1.push_back(10);arr1.push_back(9);arr1.push_back(2);arr1.push_back(5);
  arr1.push_back(3);arr1.push_back(7);arr1.push_back(101);arr1.push_back(18);
  long unsigned int len1 = findLength(arr1,8);
  printArr(arr1,8);
  COUT << "RESULT:" << len1 << ENDL;
  //The second test case with integers
  std::vector <int> arr2;
  arr2.push_back(10);arr2.push_back(5);arr2.push_back(8);arr2.push_back(3);
  arr2.push_back(9);arr2.push_back(4);arr2.push_back(12);arr2.push_back(11);
  long unsigned int len2 = findLength(arr2,8);
  printArr(arr2,8);
  COUT << "RESULT:" << len2 << ENDL;
  //The third test case with characters
  std::vector <char> arr3;
  arr3.push_back('e');arr3.push_back('A');arr3.push_back('B');arr3.push_back('a');
  arr3.push_back('C');arr3.push_back('f');arr3.push_back('D');arr3.push_back('E');
  long unsigned int len3 = findLength(arr3,8);
  printArr(arr3,8);
  COUT << "RESULT:" << len3 << ENDL;
  //The fourth test case with strings
  std::vector <std::string> arr4;
  arr4.push_back("Cheer,");arr4.push_back("cheer");arr4.push_back("for");
  arr4.push_back("ol'");arr4.push_back("Notre");arr4.push_back("Dame");
  long unsigned int len4 = findLength(arr4,6);
  printArr(arr4,6);
  COUT << "RESULT:" << len4 << ENDL;
  //The fifth test case with unsigned integers
  std::vector <unsigned int> arr5;
  arr5.push_back(1);arr5.push_back(2);arr5.push_back(4);arr5.push_back(5);
  arr5.push_back(0);
  long unsigned int len5 = findLength(arr5,5);
  printArr(arr5,5);
  COUT << "RESULT:" << len5 << ENDL;

}
