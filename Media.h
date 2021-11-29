
#ifndef MEDIAHEADER
#define MEDIAHEADER
#include <iostream>
#include <cstring>
using namespace std;

class Media {
  public:  
  virtual void Title(char*);
  virtual void Year(int);
  virtual char* getTitle();
  virtual int getYear();
private:
  char* title;
  int year;
};
#endif
  
