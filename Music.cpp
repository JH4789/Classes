#include <iostream>
#include <cstring>
#include "Music.h"
using namespace std;

void Music::addArtistName(char* newartistName) {
  artistName = new char[100];
  strcpy(artistName, newartistName);
}
char* Music::getArtistName(){
  return artistName;
}
