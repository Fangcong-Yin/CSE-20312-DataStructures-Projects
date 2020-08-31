//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Lab03 Anagram header file
#ifndef LAB3
#define LAB3
#include <iostream>
#include <string>
#include <unordered_map>

#define COUT std::cout
#define ENDL std::endl

bool anagram(std::string& s1,std::string& s2){
  //Check whether the strings are in the same length
  if(s1.length()!=s2.length()){
    return false;
  }
  //Create a hash table
  std::unordered_map<char,int> map;
  //Store the characters of the first string in the hash executable
  //Key is the char, value is the frequency count of the char
  for(long unsigned int i =0;i < s1.length();++i){
    map[s1[i]]+=1;
  }
  for(long unsigned int i = 0; i < s2.length(); ++i){
    //If the char in s2 doesn't appear in s1, return false
    if(map.find(s2[i])==map.end()){
      return false;
    }
    //If the frequency count of a char in s2 is not equal to s2, return false
    else if(map[s2[i]]<=0){
      return false;
    }else{
      //Decrease the frequency count by 1
      map[s2[i]]-=1;
    }
  }
  return true;

}

#endif
