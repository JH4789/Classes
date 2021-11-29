#include <iostream>
#include <vector>
#include "Media.h"
#include "Music.h"
#include <cstring>
using namespace std;


void printTitles(vector<Media*> &);
void addMedia(vector<Media*> &);
int main(){
  char input[10];
  
  char commandinput[10];
  bool running = true;
  
  
  vector<Media*> v;
  char* testing = new char[100];
  
  
  while(running == true) {
    cout << ("Please enter a command for what you want to do. Enter ADD to add a type of media. Enter SEARCH to search for existing media. Enter DELETE to remove existing media") <<endl;
  cin >> commandinput;
  if(strcmp(commandinput, "ADD") == 0){
    addMedia(v);   
   }
   else if(strcmp(commandinput, "PRINT") == 0) {
      printTitles(v);
   }
   else if(strcmp(commandinput, "DELETE") == 0){
      
   }
   else if(strcmp(commandinput, "QUIT") == 0) {
      running = false;
   }
   else {
      cout << "Please enter a valid input";
   }
  
}


}
void printTitles(vector<Media*> &newv){
  for(vector<Media*>::iterator it = newv.begin(); it != newv.end(); it++) {
    Media* printout = static_cast<Media*>(*it);
    cout << (*it)->getTitle() << endl;
    cout << (*it)->getYear() << endl;
    /*
    cout << (*printout)->getArtistName() << endl;
    */
  }
}
void addMedia(vector<Media*> &newv){
  char title[100];
  int yearpublished;
  char mediatype[100];
  cout << "Please enter the type of media that you are adding to the database"<< endl;
  cin >> mediatype;
  if(strcmp(mediatype, "Music") == 0) {
    Music* newmusic = new Music();
    char artist[100];
      cout << "Please enter the title of your music" <<endl;
      cin >> title;
      newmusic->Title(title);
      cout << "Please enter the year that your music was created" << endl;
      cin >> yearpublished;
      newmusic->Year(yearpublished);
      cout << "Please enter the artist that created your music" << endl;
      cin >> artist;
      newmusic->addArtistName(artist);
      newv.push_back(newmusic);  
  }
  
  
  
  
}
