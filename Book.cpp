#include <iostream>
#include "Book.h"

using namespace std;

Book::Book(string name, int status, int id, Date* date, string author) {
  newBook(name,status,id,date,author);
}

void Book::newBook(string name, int status, int id, Date* date, string author) {
  this->name = name;
  this->status = status;
  this->id = id;
  this->author = author;
  day = date->returnDay();
  month = date->returnMonth();
  year = date->returnYear();
}

void Book::printInfo(Book* book) {
  cout<<"Name: "<<book->name<<endl;
  cout<<"Author: "<<book->author<<endl;
  cout<<"Status: "<<book->status<<endl;
  cout<<"ID: "<<book->id<<endl;
  cout<<"Date: "<<book->day<<" "
    <<book->month<<" "
    <<book->year<<endl;
}
