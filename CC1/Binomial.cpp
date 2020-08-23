//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Function implementation file for Creative Application
#include "Binomial.h"
#include "Pascal.h"

void bino_expansion(int paraA,int paraB,int power){
  //Check whether the power is valid. If the power is negative, flip the value to the positive value and add a ^(-1) to the end of the output
  bool negative_power = false;
  if(power<0){
    negative_power = true;
    power = power*(-1);
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
  if(negative_power){
    COUT << "(";
  }
  for (int i =0;i<power+1;++i){
    //Output the binomial expansion
    COUT << *(final_row+i) << "((" << paraA << "*a)^" << power-i << ")*((" << paraB << "*b)^" << i << ")";
    if(i!=power){
      COUT << "+";
    }else{
      if(negative_power){
        COUT << ")^(-1)";
      }
      COUT << ENDL;
    }
  }

  free(mypascal);
}
