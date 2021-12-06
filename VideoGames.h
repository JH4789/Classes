#ifndef VIDEOGAMEHEADER
#define VIDEOGAMEHEADER
#include <iostream>
#include "Media.h"
using namespace std;
//Video Game Class
class VideoGames : public Media{
public:
  virtual void print();
  virtual void addPublisherName(char*);
  virtual void addRating(float);
  ~VideoGames();
private:
  char * publisherName;
  float rating;
};
#endif
