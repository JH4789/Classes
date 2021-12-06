#include <iostream>
#include <cstring>
#include <iomanip>
#include "VideoGames.h"
using namespace std;
//Functions for Video Game Class
void VideoGames::addPublisherName(char* newpublisherName) {
  publisherName = new char[100];
  strcpy(publisherName, newpublisherName);
}
void VideoGames::addRating(float newrating) {
  rating = newrating;
}
void VideoGames::print() {
  cout << "The title of this game is: " << title << endl;
  cout << "The year that this game was created in is: " << year << endl;
  cout << "The name of the publisher is: " << publisherName << endl;
  cout << "The rating of the game is: " << std::fixed << setprecision (2) << rating << " out of 10" << endl;
}
VideoGames::~VideoGames() {

}
