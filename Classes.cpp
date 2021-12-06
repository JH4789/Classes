/*
Name: Jayden Huang
Date: 12/5/2021
Functionality: Editable database of music, movies, and video games 
 */
//Lots of includes
#include <iostream>
#include <typeinfo>
#include <vector>
#include "Media.h"
#include <limits>
#include "Videogames.h"
#include "Music.h"
#include "Movies.h"
#include <cstring>
using namespace std;

//Prototyping
void searchTitles(vector<Media*> &);
void addMedia(vector<Media*> &);
void deleteMedia(vector<Media*> &);
int main(){
  //Input functionality essentials
  char input[10];
  char commandinput[10];
  bool running = true;
  vector<Media*> v;
  while(running == true) {
    cout << ("Please enter a command for what you want to do. Enter ADD to add a type of media. Enter SEARCH to search for existing media. Enter DELETE to remove existing media. Enter QUIT to exit the program") <<endl;
  cin >> commandinput;
  if(strcmp(commandinput, "ADD") == 0){
    addMedia(v);   
   }
   else if(strcmp(commandinput, "SEARCH") == 0) {
      searchTitles(v);
   }
   else if(strcmp(commandinput, "DELETE") == 0){
     deleteMedia(v);
   }
   else if(strcmp(commandinput, "QUIT") == 0) {
      running = false;
   }
   else {
     cout << "Please enter a valid input" << endl;
   }
  
  }
}
void searchTitles(vector<Media*> &newv){
  char searchcommand[100];
  char searchtitle[100];
  int searchyear;
  cout << "Please enter TITLE if you wish to search by title and YEAR if you wish to search by year" << endl;
  cin >> searchcommand;
  if(strcmp(searchcommand, "TITLE") == 0) {
    cout << "Please enter the title of the media that you are looking for" << endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get(searchtitle, 100);
    for(vector<Media*>:: iterator it = newv.begin(); it < newv.end(); ++it) {
      //Iterates through the vector checking for matches
      if(strcmp((*it)->getTitle(), searchtitle) == 0) {
	 (*it)->print();
      }
    }
  }
  if(strcmp(searchcommand, "YEAR") == 0) {
    cout << "Please enter the year of the media that you are looking for" << endl;
    cin >> searchyear;
    cin.clear();
    for(vector<Media*>:: iterator it = newv.begin(); it != newv.end(); ++it) {
      //Iterates through checking for year matches
      if((*it)->getYear() == searchyear) {
	 (*it)->print();
        }
    }
  }
}
void addMedia(vector<Media*> &newv){
  char title[100];
  int yearpublished;
  char mediatype[100];
  cout << "Please enter the type of media that you are adding to the database. Enter VG for a video game, Music for a piece of musice, and Movie for a movie."<< endl;
  cin >> mediatype;
  //Adds new media of type Music to the vector
  if(strcmp(mediatype, "Music") == 0) {
    Music* newmusic = new Music();
    char artist[100];
    int inputduration;
      cout << "Please enter the title of the music" <<endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cin.get(title, 100);
      newmusic->Title(title);
      cout << "Please enter the year that the music was created in" << endl;
      cin >> yearpublished;
      newmusic->Year(yearpublished);
      cout << "Please enter the artist that created the music" << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cin.get(artist, 100);
      newmusic->addArtistName(artist);
      cout << "Please enter the duration of the music in minutes" << endl;
      cin >> inputduration;
      newmusic->addDuration(inputduration);
      newv.push_back(newmusic);
  }
  //Adds new media of type VideoGame
  if(strcmp(mediatype, "VG") == 0) {
    VideoGames* newvg = new VideoGames();
    char publisher[100];
    float rating;
      cout << "Please enter the title of the video game" <<endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cin.get(title, 100);
      newvg->Title(title);
      cout << "Please enter the year that the videogame was created in" << endl;
      cin >> yearpublished;
      newvg->Year(yearpublished);
      cout << "Please enter the publisher of the game" << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cin.get(publisher, 100);
      newvg->addPublisherName(publisher);
      cout << "Please enter the rating of the game out of 10" << endl;
      cin >> rating;
      cin.clear();
      newvg->addRating(rating);
      newv.push_back(newvg);
  }
  //Adds new media of type Movie
  if(strcmp(mediatype, "Movie") == 0) {
    Movies* newmovie = new Movies();
    char director[100];
    float rating;
    int duration;
      cout << "Please enter the title of the movie" <<endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cin.get(title, 100);
      newmovie->Title(title);
      cout << "Please enter the year that the movie was created in" << endl;
      cin >> yearpublished;
      newmovie->Year(yearpublished);
      cout << "Please enter the director of the movie" << endl;
      cin.clear();
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      cin.get(director, 100);
      newmovie->addDirectorName(director);
      cout << "Please enter the duration of the movie in minutes" << endl;
      cin >> duration;
      newmovie->addDuration(duration);
      cout << "Please enter the rating of the movie out of 10" << endl;
      cin >> rating;
      cin.clear();
      newmovie->addRating(rating);
      newv.push_back(newmovie);
  }
}
//Same framework of search function but deleting instead
void deleteMedia(vector<Media*> &newv) {
  char deletecommand[100];
  char deletetitle[100];
  char deleteconfirm[100];
  int deleteyear;
  Media* temp;
  cout << "Please enter TITLE if you wish to find media to delete by title and YEAR if you wish to so by year" << endl;
  cin >> deletecommand;
  if(strcmp(deletecommand, "TITLE") == 0) {
    cout << "Please enter the title of the media that you want to delete" << endl;
    cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.get(deletetitle, 100);
    //Vector iterator not used here because erase is needed
    for(int i = 0; i < newv.size() ; i++) {
      if(strcmp(newv[i]->getTitle(), deletetitle) == 0) {
        newv[i]->print();
	cout << "Are you sure you want to delete this media? Enter 'Y' to continue.";
	cin >> deleteconfirm;
	if(strcmp(deleteconfirm, "Y") == 0) {
	  delete newv[i];
	  newv.erase(newv.begin() + i);
	}    
      }
    }
  }
  //Same as above but for year instead of title
  if(strcmp(deletecommand, "YEAR") == 0) {
    cout << "Please enter the year of the media that you want to delete" << endl;
    cin >> deleteyear;
    for(int i = 0; i < newv.size(); i++) {
      if(newv[i]->getYear() == deleteyear) {
	 newv[i]->print();
	 cout << "Are you sure you want to delete this media? Enter 'Y' to continue.";
	 cin >> deleteconfirm;
	 if(strcmp(deleteconfirm, "Y") == 0) {
	  delete newv[i];
	  newv.erase(newv.begin() + i);
	}
        }
    }
  }
}
