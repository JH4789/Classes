#include <iostream>
#include <vector>
#include "Media.h"
#include <cstring>
using namespace std;


void printTitles(vector<Media*> &);
void addMedia(vector<Media*> &);
int main(){
  char input[10];
  char commandinput[10];
  bool running = true;
  int roomcount = 0;
  Media* list[100];
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
    cout << (*it)->getTitle() << endl;
  }
}
void addMedia(vector<Media*> &newv){
  Media* newmedia = new Media();
  char input[100];
  cout << "Please enter the title of your media" <<endl;
    cin >> input;
    newmedia->Title(input);
    newv.push_back(newmedia);
   
}
