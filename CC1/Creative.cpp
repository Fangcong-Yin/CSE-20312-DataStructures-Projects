//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Main function file for Creative Application
#include "Pascal.h"
#include "Binomial.h"

int main(){
  int m,n,p;
  COUT << "the Binomial Expansion of (ma+nb)^p =: " << ENDL;
  //Read in the two parameters and the power from the user
  COUT << "m=: " << ENDL;
  CIN >> m;
  COUT << "n=: " << ENDL;
  CIN >> n;
  COUT << "p=: " << ENDL;
  CIN >> p;
  bino_expansion(m,n,p);


}
