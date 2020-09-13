//Author: Fnagcong Yin
//Email: fyin2@nd.edu
//CC3: Creative application

#include "../include/BookData.h"
//Print the book information
void BookData::printBookInfo(VECTOR<STRING> bookInfo){
    for(long unsigned int i =0; i<bookInfo.size();++i){
      //Spearate different book information by |
      COUT << "|" << bookInfo[i];
    }
    COUT << ENDL;
  }

  //A default constructor that construct a default double hash table
  BookData::BookData():database(){}

  //Read in a book and its information fro the user interface
  void BookData::readInBook(STRING bookName){
    STRING curr_name = bookName;
    STRING author,publication_year,page;
    COUT << "Please enter the author name: " << ENDL;
    CIN.sync();
    std::getline(CIN,author);

    COUT << "Please enter the publication year: " << ENDL;
    CIN.sync();
    std::getline(CIN,publication_year);

    COUT << "Please enter the number of pages of this book: " << ENDL;
    CIN.sync();
    std::getline(CIN,page);
    //Store the user input into the double hash table
    VECTOR<STRING> bookInfo = {author,publication_year,page};
    database.insert({bookName,bookInfo});
  }

  //Search for a book and print out its information from the database
  void BookData::searchBook(STRING bookName){
    if(database.contains(bookName)){
      VECTOR<STRING> bookInfo = database[bookName];
      COUT << bookName;
      //Print out the information
      printBookInfo(bookInfo);
    }
    else{
      COUT << "The book is not in the database!" << ENDL;
    }
  }
    //Delete a book from the database
    void BookData::deleteBook(STRING bookName){
      if(database.contains(bookName)){
        database.remove(bookName);
      }
      else{
        COUT << "The book is not in the database!" << ENDL;
      }
    }
