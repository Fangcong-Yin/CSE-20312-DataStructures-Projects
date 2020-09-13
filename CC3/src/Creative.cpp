//Author: Fnagcong Yin
//Email: fyin2@nd.edu
//CC3: Creative application main program

#include "../include/BookData.h"

int main(){
  char a = ' ';
  //Create a book database object
  BookData df;
  while(a!='q'){
    COUT << "Welcome to the Book Database: Please choose one option from the following: " << ENDL;
    COUT << "a - add a book to the database" << ENDL;
    COUT << "s - search for a book in the database" << ENDL;
    COUT << "d - delete a book in the database" << ENDL;
    COUT << "q - quit" << ENDL;
    //Read in user option
    CIN >> a;
    //Add books
    if(a=='a'){
      CIN.ignore();
      COUT << "Please enter a book name: " << ENDL;
      STRING name;
      std::getline(CIN,name);
      //Read in a book name and call the readInBook function
      df.readInBook(name);
    }
    //Search for a book
    else if(a=='s'){
      CIN.ignore();
      COUT << "Please enter a book name: " << ENDL;
      STRING name;
      std::getline(CIN,name);
      //call searchBook function
      df.searchBook(name);
    }
    //Delete a book
    else if(a=='d'){
      CIN.ignore();
      COUT << "Please enter a book name: " << ENDL;
      STRING name;
      std::getline(CIN, name);
      //call the delete book function
      df.deleteBook(name);
    }
  }

}
