//Fangcong Yin
//fyin2@nd.edu
//CC4 Problem 1
#ifndef PROB1
#define PROB1


#include <iostream>
#include <vector>
#include <queue>
#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector
#define QUEUE std::queue
#define PAIR std::pair

//Check whether the next spot to go is valid
bool checkValid(VECTOR<VECTOR<int> >& arr, VECTOR<VECTOR<bool> >& visited, int i, int j, int prev_num){

//If the index goes out of range or the next height is higher than the previous height or the spot has been visted,
//return False
//otherwise, return true
  if((i<(int)arr.size()) && (j < (int)arr[0].size()) && (i>=0) && (j >= 0) && (arr[i][j] <= prev_num) && !visited[i][j]){
      return true;
  }
  return false;
}

bool generateRoutes(VECTOR<VECTOR<int> >& arr, int start_i,int start_j){
  //Use a queue to store the rout
  QUEUE<PAIR<int,int> > q;
  VECTOR<VECTOR<bool> > visited (arr.size(),VECTOR<bool>(arr[0].size()));
  //Mark the origin as visited
  visited[start_i][start_j]=true;
  //Push the origin to the queue
  q.push({start_i,start_j});
  while(!q.empty()){
    PAIR<int,int> front_pair = q.front();
    int i = front_pair.first;
    int j = front_pair.second;
    //If reahces pacific, return true
    if(i == 0 || j == 0){
      return true;
    }
    q.pop();
    //Check each of the four directions
    if(checkValid(arr,visited,i+1,j,arr[i][j])){
      visited[i+1][j] = true;
      q.push({i+1,j});
    }
    if(checkValid(arr,visited,i-1,j,arr[i][j])){
      visited[i-1][j] = true;
      q.push({i-1,j});
    }
    if(checkValid(arr,visited,i,j+1,arr[i][j])){
      visited[i][j+1] = true;
      q.push({i,j+1});
    }
    if(checkValid(arr,visited,i,j-1,arr[i][j])){
      visited[i][j-1] = true;
      q.push({i,j-1});
    }
  }
  return false;
}

void getPosition(VECTOR<VECTOR<int> >& arr){

    COUT << "[";
    //Get the number of columns and rows in the array
    int row_num = (int)arr.size();
    int col_num = (int)arr[0].size();
    //Check the east coast of the atlantic first
    for(int i =0; i<row_num-1;++i){
        bool valid = generateRoutes(arr,i,col_num-1);
        if(valid){
            COUT << "[" << i << "," << col_num-1 << "],";
        }
    }
    //Then check the south coast of the atlantic
    for(int j =0; j<col_num;++j){
        bool valid = generateRoutes(arr,row_num-1,j);
        if(valid){
            COUT << "[" << row_num-1 << "," << j << "],";
        }
    }
    COUT << "]" << ENDL;
}

#endif
