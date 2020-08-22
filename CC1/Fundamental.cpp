//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Cpp for Pascal Triangle that contains main function

#include "Pascal.h"
int main(){
  COUT << "How many levels do you want to calculate: " << ENDL;
  int row;
  CIN >> row;
  int** mypascal = createPascal(row);
  printPascal(mypascal,row);
  char stop = 'y';
  //Use a while loop to iteratively read in positions
  while(stop!='n'){
    COUT << "Enter a row and column value to print [two numbers only]:" << ENDL;
    int get_row,get_col;
    CIN >> get_row >> get_col;
    //Check whether the row index is valid
    if(get_row<0 || get_row > row ){
      COUT << get_row << " is not a valid row" << ENDL;
    }
    //Check whether the column index is valid
    else if(get_col < 0 || get_col > get_row){
      COUT << get_col << " is not a valid column in row " <<get_row << ENDL;
    }
    else{
      getPascal(mypascal,get_row,get_col);
    }
    COUT << "Continue? [y/n]:" << ENDL;
    CIN >> stop;
  }
  free(mypascal);

}
