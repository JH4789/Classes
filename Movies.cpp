#include <iostream>
#include <cstring>
#include <iomanip>
#include "Movies.h"
using namespace std;
//Functions for Movie Class
void Movies::addDirectorName(char* newdirectorName) {
  directorName = new char[100];
  strcpy(directorName, newdirectorName);
}
void Movies::addDuration(int newduration) {
  duration = newduration;
}
void Movies::addRating(float newrating) {
  rating = newrating; 
}
void Movies::print() {
  cout << "The title of the movie is: " << title << endl;
  cout << "The year that the movie was created in is: " << year << endl;
  cout << "The director of this movie is: " << directorName << endl;
  cout << "The duration of this movie is: " << duration << " minutes" << endl;
  cout << "The rating of this move is " << std::fixed << setprecision(2) << rating << " out of 10" << endl;
}
Movies::~Movies() {

}
