#ifndef MUSICHEADER
#define MUSICHEADER
#include <iostream>
#include "Media.h"
using namespace std;

class Music : public Media {
public:
  virtual void addArtistName(char*);
  virtual char* getArtistName();
private:
  char* artistName;
};
#endif
