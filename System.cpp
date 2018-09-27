#include <iostream>
#include <stdlib.h>
#include "System.h"

using namespace std;

int main() {
  char option = '0';

  while (option != '6') {
    option = showMenu();
    handleMenu(option);
  }

  return 0;
}

char showMenu() {
  char option = '0';

  cout<<"Library"<<endl;
  cout<<"1. List of books"<<endl;
  cout<<"2. Loans"<<endl;
  cout<<"3. Members"<<endl;
  cout<<"4. Make a loan"<<endl;
  cout<<"5. Sanctions"<<endl;
  cout<<"6. Salir"<<endl;

  do{
    cin>>option;
  } while (option < '0' || option >'6');
  return option;
}

void handleMenu(char option) {
  switch (option) {
    case '1':
    break;
    case '2':
    break;
    case '3':
    break;
    case '4':
    break;
    case '5':
    break;
    case '6':
      cout<<"Closing the program"<<endl;
  }

}
