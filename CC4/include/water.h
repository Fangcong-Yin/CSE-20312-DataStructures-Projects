//Fangcong Yin
//fyin2@nd.edu
//Problem 2
#ifndef PROB2
#define PROB2

#include <iostream>
#include <vector>
#include <stack>
#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector
#define STACK std::stack

//A struct that is used to store the index and height of a bar
struct Bar{
  int index;
  int height;

  Bar() : index(),height(){}
  Bar(int index_in,int height_in): index(index_in),height(height_in){}
};


void getWater(VECTOR<int>& arr){
  //Create a stack
  STACK<Bar> s;
  int sum = 0;
  //Loop through each bar
  for(int i = 0; i< (int)arr.size();++i){
    int height = arr[i];
    int index = i;
    //If the height of the current bar is higher than the top bar on the stack
    //We need to do some calculations
    while(!s.empty()&&height>s.top().height){
      //Get the height of the middle point of the valley
      int middle_height = s.top().height;
      s.pop();
      //Calculate the difference of heights, i.e., the depth of the valley
      if(!s.empty()){
        int left_height = s.top().height;
        int left_index= s.top().index;
        int distance = index - left_index-1;
        int min_height=0;
        if(left_height <= height){
          min_height = left_height;
        }
        else{
          min_height = height;
        }
        //Calculate the area and add it to the sum
        sum+=distance*(min_height-middle_height);
      }



    }
    //Update the stack
      s.push(Bar{index,height});
}
COUT << sum << ENDL;
}
#endif
