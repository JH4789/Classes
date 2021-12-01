#include <iostream>
#include <typeinfo>
#include <vector>
#include "Media.h"
#include "Music.h"
#include <cstring>
using namespace std;


void searchTitles(vector<Media*> &);
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
   else if(strcmp(commandinput, "SEARCH") == 0) {
      searchTitles(v);
   }
   else if(strcmp(commandinput, "DELETE") == 0){
      
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
    cin >> searchtitle;
    for(vector<Media*>:: iterator it = newv.begin(); it != newv.end(); ++it) {
      //Change this please needs actual compare function
      (*it)->print();
    }
  }
  if(strcmp(searchcommand, "YEAR") == 0) {
    cout << "Please enter the year of the media that you are looking for" << endl;
    cin >> searchyear;
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
    int inputduration;
      cout << "Please enter the title of the music" <<endl;
      cin >> title;
      newmusic->Title(title);
      cout << "Please enter the year that the music was created in" << endl;
      cin >> yearpublished;
      newmusic->Year(yearpublished);
      cout << "Please enter the artist that created the music" << endl;
      cin >> artist;
      newmusic->addArtistName(artist);
      cout << "Please enter the duration of the music" << endl;
      cin >> inputduration;
      newmusic->addDuration(inputduration);
      newv.push_back(newmusic);
      
  }
  
  
  
  
}
