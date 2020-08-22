//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Function implementation file for Creative Application
#include "Binomial.h"
#include "Pascal.h"

void bino_expansion(int paraA,int paraB,int power){
  //Check whether the power is valid
  if(power<0){
    COUT << "Invalid power: only non-negative whole number can be accpted as power!" << ENDL;
    return;
  }
  //Check whether the two parameters are valid
  else if(paraA==0){
    COUT << "(" << paraB << "*b)^" << power << ENDL;
    return;
  }
  else if(paraB==0){
    COUT << "(" << paraA << "*a)^" << power << ENDL;
    return;
  }
  //Create a pascal triangle and only use the last row for binomial expansion
  int** mypascal = createPascal(power+1);
  int* final_row = *(mypascal+power);
  for (int i =0;i<power+1;++i){
    //Output the binomial expansion
    COUT << *(final_row+i) << "((" << paraA << "*a)^" << power-i << ")*((" << paraB << "*b)^" << i << ")";
    if(i!=power){
      COUT << "+";
    }else{
      COUT << ENDL;
    }
  }
  free(mypascal);
}
