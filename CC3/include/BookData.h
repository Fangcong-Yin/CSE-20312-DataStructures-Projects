//Author: Fnagcong Yin
//Email: fyin2@nd.edu
//CC3: Creative application

#ifndef CREATIVE
#define CREATIVE

#include "DoubleHash.h"

#define COUT std::cout
#define CIN std::cin
#define VECTOR std::vector
#define STRING std::string
#define ENDL std::endl

// This library uses double hash to store different information of a book into a book info database
//The user will be able to interact with the library, writing, reading, and deleting books from the database
//Source: https://video.sas.com/sasgf17/detail/videos/user-program/video/5383951087001/1122---using-hash-tables-for-creating-electronic-code-books

class BookData{
private:
  //A double hash table to store the information
  DoubleHash<STRING,VECTOR<STRING>> database;
  //Print the book information
  void printBookInfo(VECTOR<STRING> bookInfo);

public:
  //A constructor
  BookData();
  //Read in the information of a book
  void readInBook(STRING bookName);

  //Search for a book that is already in the database
  void searchBook(STRING bookName);
  //Delete a book from the database
  void deleteBook(STRING bookName);
  };

#endif
