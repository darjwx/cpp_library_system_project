#ifndef _Book_H_
#include "Date.cpp"
class Book {
private:
  string name;
  //Author author;
  string author;
  int day, month, year;
  int status;
  int id;
public:
  Book(string name, int status, int id, Date* date, string author);
  void newBook(string name, int status, int id, Date* date, string author);
  int returnStatus(Book* book);
  int returnId(Book* book);
  void showCurrentBooks();
  void getNumberOfBooks();
  void printInfo(Book* book);
};
#define _Book_H_
#endif //_Book_H_
