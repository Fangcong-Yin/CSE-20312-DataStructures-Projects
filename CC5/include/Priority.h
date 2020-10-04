//Fangcong Yin
//fyin2@nd.edu
//Priority class

#ifndef PRIORITY
#define PRIORITY
#include <cstdlib>
#include <iostream>

template <class T>
class Priority{
private:
  T value;
  unsigned int priority;
public:
  Priority(): value(),priority(){}
  Priority(T value_in, unsigned int priority_in): value(value_in),priority(priority_in){}
  ~Priority(){}
  //copy constructor
  Priority(const Priority<T>& p): value(p.value),priority(p.priority){}
//Assignment operator
  Priority<T>& operator=(const Priority<T>& p){
    if(&p !=this){
      this->value = p.value;
      this -> priority = p.priority;
    }
    return *this;
  }
  //Two accessor to the private members
  T getValue() const {
    return this -> value;
  }
  unsigned int getPriority () const{
    return this->priority;
  }
  //Comparison operators
  bool operator>(const  Priority<T>& rhs) const {
    return ((this ->priority) > (rhs.priority));
  }
  bool operator==(const Priority<T>& rhs) const{
    return ((this ->priority) == (rhs.priority));
  }
  bool operator<(const Priority<T>& rhs) const{
    return ((this -> priority) < (rhs.priority));
  }
  bool operator>=(const Priority<T>& rhs) const{
    return((this -> priority) >= (rhs.priority));
  }
  bool operator<=(const Priority<T>& rhs) const{
    return ((this -> priority) <= (rhs.priority));
  }
  friend std::ostream& operator <<(std::ostream& os, const Priority<T> & p){
    os << "Priority: " << p.priority << " Value: " << p.value;
    return os;
  }
};

#endif
