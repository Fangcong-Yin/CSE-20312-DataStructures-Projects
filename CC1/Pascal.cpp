//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Cpp file for Pascal Triangle
#include "Pascal.h"


int** createPascal(int row){
  //Allocate space to the pascal triangle
    int** pascal = (int**) malloc(row*sizeof(int*));
    for(int i = 0;i<row;++i){
      //Allocate space to each row
      int* this_row = (int*) malloc((i+1)*sizeof(int));
      for(int j =0;j<=i;++j){
        //Assign the value of 1 to the first and last entry of each row
        if(j==0 || j==i){
          *(this_row+j) = 1;
        }
        else{
          //Assign the value of other entries of each row
          *(this_row+j) = *((*(pascal+i-1))+j)+*((*(pascal+i-1))+j-1);
        }
      }
      //Add the row to the two dimensional array
      *(pascal+i)=this_row;
    }
    return pascal;
}
void printPascal(int** pascal,int row){
  //Use nested loop to print the values of the pascal triangle
  for (int i =0;i<row;++i){
    for(int j =0;j<=i;++j){
      COUT<<*((*(pascal+i))+j) << " ";
    }
    COUT<< ENDL;
  }
}
void getPascal(int** pascal,int row,int col){
  //Get the value of a specific position of the pascal triangle
  COUT << *((*(pascal+row-1))+col-1) << ENDL;
}
