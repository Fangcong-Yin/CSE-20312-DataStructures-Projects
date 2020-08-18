//File: Lab1.h
////Author: Fangcong Yin
////fyin2@nd.edu
#ifndef LAB1
#define LAB1

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl
#define STRING std::string
#define SSTREAM std::stringstream

//NoBadChars() function is used to test whether the input is valid, especially for digit inputs
//Full credit of this function is given to Professor Morrison: https://github.com/mmorri22/cse20312/blob/master/Lab01/cinStr.cpp
bool noBadChars(STRING testString){
  for(unsigned int i = 0; i < testString.length(); i++){
		if((testString[i] < '0' || testString[i] > '9') ){
				if(testString[i] == '-'){
          //If the negative sign appears in the middle of a number, it's a bad char
					if(i != 0)
						return false;

				}
				else if(testString[i] != '.'){
          //Chars other than . and - are bad characters in numbers
					return false;
				}
		}

	}

	return true;
}

void callByRef(long unsigned int& a, float& b, double& c, char& d){
  STRING strA, strB,strC,strD;
  COUT << "Please input an unsigned integer: ";
	CIN >> strA;

//Check if the input for the unsigned integer is valid
	if(SSTREAM(strA) >> a
		&& noBadChars(strA)
		&& strA.find(".") == STRING::npos
    && strA.find("-") == STRING::npos){
		    COUT << "The integer you have given is " << a << ENDL;
	}
	else{
		std::cerr << strA << " is not a valid unsigned integer" << ENDL;
		exit(-1);
	}


//Check if the input for the  float is valid
	COUT << "Please input a float: ";
	CIN >> strB;
	if(SSTREAM(strB) >> b
		&& noBadChars(strB )){

		COUT << "The float value is " << b << ENDL;

	}
	else{

		std::cerr << strB << " is not a valid Float" << ENDL;
		exit(-1);

	}
//Check if the input for the double is valid
  COUT << "Please input a double: ";
  CIN >> strC;
  if(SSTREAM(strC) >> c
    && noBadChars(strC)){

    COUT << "The float value is " << c << ENDL;

  }
  else{

    std::cerr << strC << " is not a valid double" << ENDL;
    exit(-1);

  }
//Read the input for a char
    COUT << "Please input a char: ";
    if(CIN >> d) {

      COUT << "The char value is " << d << ENDL;

    }
    else{

      std::cerr << "This is not a valid char" << ENDL;
      exit(-1);

    }

}
#endif
