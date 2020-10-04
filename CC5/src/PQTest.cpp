//Fangcong Yin
//fyin2@nd.edu
//PQTest

#include "../include/PriorityQueue.h"
#include "../include/Priority.h"
#include <string>
int main(){
PriorityQueue < Priority < std::string > > c;
//The first test
Priority < std::string > d ("Cheering",5);
Priority < std::string > e ("The",3);
Priority < std::string > f ("Name",7);
Priority < std::string > g ("Wake",1);
Priority < std::string > h ("Echoes",4);
Priority < std::string > i ("Her",6);
Priority < std::string > j ("Up",2);
c.push(d);
c.push(e);
c.push(f);
c.push(g);
c.push(h);
c.push(i);
c.push(j);
unsigned int len = c.size();
for(unsigned int m =0;m < len; ++m){
  std::cout << c.front() << std::endl;
  c.pop();

}

//The second test
Priority < std::string > dd ("am",1);
Priority < std::string > ee ("I",1);
Priority < std::string > ff ("Groot",2);
c.push(dd);
c.push(ee);
c.push(ff);
len = c.size();
for(unsigned int m =0;m < len; ++m){
  std::cout << c.front() << std::endl;
  c.pop();

}




}
