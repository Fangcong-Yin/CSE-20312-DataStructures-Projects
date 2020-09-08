//Author: Fangcong Yin
//Email: fyin2@nd.edu
//Lab 04
#ifndef Lab4
#define Lab4


#include <iostream>
#include <vector>
#include <algorithm>

#define VECTOR std::vector
#define COUT std::cout
#define ENDL std::endl

//printVector, cmp, max, and min functions are adpated from Professor Morrison's code in the lecture of Lab4
//Source: https://github.com/mmorri22/cse20312/tree/master/Lab04

//This function is used to print the vector
void printVector(VECTOR< VECTOR<int> >& intervals){
  COUT << "{ " ;
  for(long unsigned int i =0; i<intervals.size();++i){
      COUT << "{" << intervals[i][0] << "," << intervals[i][1] << "}" << " ";
  }
  COUT << "} " << ENDL;
}
//This is a condition for sorting
bool cmp(VECTOR<int> a,VECTOR<int> b){
  return a[0]<b[0];
}
//Find the maximum value between value1 and value2
int max( int& value1, int& value2 ){

	return (value1 > value2) ? value1 : value2;

}

//Find the minimum value between value1 and value2
int min( int& value1, int& value2 ){

	return (value1 < value2) ? value1 : value2;

}

//The merge function
//Adpated from Professor Morrison's code
VECTOR< VECTOR<int> > merge( VECTOR< VECTOR<int> >& intervals) {

	VECTOR < VECTOR <int> > solution;

  //Sort the vector first
	std::sort(intervals.begin(),intervals.end(), cmp);

	solution.push_back(intervals[0]);

	long unsigned int index = 1;
  //Start merging overlapping intervals
	while(index < intervals.size()){

		long unsigned int last = solution.size()-1;

		if( max(solution[last][0],solution[last][1]) < min(intervals[index][0],intervals[index][1]) ){
			solution.push_back(intervals[index]);
		}
		else {

			solution[last][0] = min(solution[last][0], intervals[index][0]);
			solution[last][1] = max(solution[last][1], intervals[index][1]);
		}

		index++;
	}

	return solution;
}

#endif
