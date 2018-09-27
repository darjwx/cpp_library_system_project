#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year) {
  Date::setDate(day,month,year);
}

void Date::setDate(int day, int month, int year) {
  this->day = day;
  this->month = month;
  this->year = year;
}

void Date::printDate(Date* date) {
  cout<<"Dia: "<<day<<" ";
  cout<<"Mes: "<<month<<" ";
  cout<<"Año: "<<year;
}

int Date::returnDay() {
  return day;
}

int Date::returnMonth() {
  return month;
}

int Date::returnYear() {
  return year;
}
