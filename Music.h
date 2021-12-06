#ifndef MUSICHEADER
#define MUSICHEADER
#include <iostream>
#include "Media.h"
using namespace std;
//Class definition for Music
class Music : public Media {
public:
  virtual void addArtistName(char*);
  virtual void print();
  virtual void addDuration(int);
  ~Music();
private:
  char* artistName;
  int duration;
};
#endif
