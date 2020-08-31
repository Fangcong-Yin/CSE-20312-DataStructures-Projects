//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Lab03

#include "../include/Anagram.h"
int main(){
    std::string str1Arr[4] = {"anagram","evil","cameralistic","anachronism"};
    std::string str2Arr[4] = {"monogram","vile","acclimatiser","anarchism"};
    for(long unsigned int i =0;i<4;++i){
      std::string a1 = str1Arr[i];
      std::string a2 = str2Arr[i];
      if(anagram(a1,a2)){
        COUT << a1 << " and " << a2 << " are a pair of anagram!" << ENDL;
      }else{
        COUT << a1 << " and " << a2 << " are not a pair of anagram!" << ENDL;
      }
    }

}
