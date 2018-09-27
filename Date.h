#ifndef _Date_H_
#define _Date_H_
class Date {
private:
  int year;
  int month;
  int day;

public:
  Date (int day, int month, int year);
  void setDate(int day, int month, int year);
  void printDate(Date* date);
  int returnDay();
  int returnMonth();
  int returnYear();
};
#endif //_Date_H_
