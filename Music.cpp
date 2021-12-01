#include <iostream>
#include <cstring>
#include "Music.h"
using namespace std;

void Music::addArtistName(char* newartistName) {
  artistName = new char[100];
  strcpy(artistName, newartistName);
}
void Music::addDuration(int newduration) {
  duration = newduration;
}
void Music::print(){
  cout << "The title of this piece is: " << title << endl;
  cout << "The year that this piece was created in is: " << year << endl;
  cout << "The name of the artist is: " << artistName << endl;
  cout << "The duration of this piece is: " << duration << endl;
  
}
