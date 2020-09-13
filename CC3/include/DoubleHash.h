//Author: Fangcong Yin
//Email: fyin2@nd.edu
//CC3: Double Hash Class

#include "LinearProbe.h"

#ifndef DOUBLEHASH
#define DOUBLEHASH

template<class Key, class Value>
class DoubleHash: public HashTable<Key, Value> {

private:
  //This is the HashFunction2(v) = 3-v%3 for integers
  long unsigned int HashFunc2( const int& keyToTranslate ) const{
    long unsigned int v;
    if (keyToTranslate < 0){
      v = (long unsigned int)(-1 * keyToTranslate);

    }
    else{
      v = (long unsigned int) keyToTranslate;
    }

    return (3-(v%3));

  }

    //This is the HashFunction2(v) = 3-v%3 for strings
  long unsigned int HashFunc2( const std::string& keyToTranslate ) const{

    return (3-(keyToTranslate.size()%3));

  }
  //The overridden findPos function
  long unsigned int findPos( const Key& theKey ) const{

    long unsigned int currentPos;
    //iter starts from 1 instead of 0
    long unsigned int iter = 1;
    do{
      //this->HashFunc represents Hash1(v) =v
      currentPos = (this->HashFunc( theKey ) + iter*HashFunc2( theKey )) % ((this -> array).capacity());
      ++iter;
    }
    while(
      (this -> array).at( currentPos ).state != EMPTY
      && (this -> array).at( currentPos ).state != DELETED
      && (this -> array).at( currentPos ).key != theKey
      && iter < (this -> array).capacity()
    );

    // Return capacity if the current value isn't the key. For safety
    if((this -> array).at( currentPos ).state == ACTIVE
      && (this -> array).at( currentPos ).key != theKey ){

        return (this -> array).capacity();

      }

    return currentPos;

  }

public:
  //The Double Hash constructor uses the constructor from HashTable class
  DoubleHash(const unsigned int size = 0) : HashTable<Key,Value>(size) { }
  //Destructor
  virtual ~DoubleHash(){}
  //Overriden ostream operator
  friend std::ostream& operator<<( std::ostream& output, const DoubleHash<Key, Value>& theTable ){
    output << "Double Hash Results: " << std::endl;
    output << "Double Hash Table Size: " << theTable.array.size() << std::endl;
    output << "Hashed Elements: " << theTable.numHash << std::endl;

    for(unsigned int iter = 0; iter < theTable.array.size(); iter++){

      output << "{" << iter << ": ";

      if( theTable.array[iter].state == ACTIVE ){

        output << "ACTIVE, ";

      }
      else if( theTable.array[iter].state == DELETED ){

        output << "DELETED, ";

      }
      else{

        output << "EMPTY, ";
      }

      output << theTable.array[iter].key << ", ";

      output << theTable.array[iter].value << "}" << std::endl;

    }

    return output;
  }

};


#endif
