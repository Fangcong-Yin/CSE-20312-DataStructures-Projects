//Fangcong Yin
//fyin2@nd.edu
//Priority Queue class

#ifndef QUEUE_H
#define QUEUE_H

#include "SorDLList.h"

template<class T>
class PriorityQueue{

	private:

		SorDLList<T> list;
		unsigned int max_len;
		unsigned int queueSize;

	public:

		// Default constructor
		PriorityQueue() : list(), max_len(-1), queueSize( 0 ) {}

		// Constructor with limited queue size
		PriorityQueue(unsigned int max) : list(), max_len(max), queueSize( 0 ) {}

		void push(T elem){

			if(queueSize < max_len){

				list.Insert( elem );
				queueSize++;

			}
		}

		void pop(){

			if(queueSize > 0){

				list.pop_front();
				queueSize--;

			}
		}

		T front() const{

			return list.front();

		}

		T back() const{

			return list.back();

		}

		unsigned int max_size() const{

			return max_len;

		}

		unsigned int size() const{

			return queueSize;

		}

		bool empty() const{

			return queueSize == 0;

		}


};

#endif
