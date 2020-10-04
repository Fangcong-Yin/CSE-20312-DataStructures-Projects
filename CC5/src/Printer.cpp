//Fangcong Yin
//fyin2@nd.edu
//Creative Application: Priority queuing for the printer - header file
//Source; https://social.technet.microsoft.com/wiki/contents/articles/25955.printing-pool-and-priority-queuing.aspx

#include "../include/Printer.h"

void printer(){
  char sign = 'c';
  PriorityQueue< Priority < std::string > > q;
  //Continuously read in user's input
  while(sign!='q'){
    std::cout << "Enter c to continue to uplaod a new file. Enter p to start printing. Enter q to quit." << std::endl;
    std::cin >> sign;
    //Read in files
    if(sign=='c'){

    std::string filename;
    unsigned int page;
    std::cout<<"Please Upload a file to the printer. This printer will print each page in 1 s." << std::endl;
    std::cout << "What is the file name?" << std::endl;
    std::cin >> filename;
    std::cout << "What is the number of pages of the file?" << std::endl;
    std::cin >> page;
    Priority < std::string > p (filename,page);
    //Put the file into the priority queue
    q.push(p);
    std::cout << "The first file to print in the queue is: " << std::endl;
    std::cout << "Filename: " << q.front().getValue() << " Page: " << q.front().getPriority() << std::endl;
  }
  //Start printing
    else if (sign=='p'){
      if(q.empty()){
        std::cout << "There are no files in the printer. Please upload a file. " << std::endl;
        break;
      }
      while(!q.empty()){
        std::cout << "Processing the first file ... " << std::endl;
    std::cout << "Filename: " << q.front().getValue() << " Page: " << q.front().getPriority() << std::endl;
    //the time of sleep simulates the print time 
    sleep((q.front().getPriority()));
    std::cout << "Finish printing the first file in " << (q.front().getPriority()) << "seconds" << std::endl;
    q.pop();
    }
    std::cout << "Finish printing all files in the printer." << std::endl;
  }
  }
}
