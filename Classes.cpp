#include <iostream>
#include <vector>
#include "Media.h"
using namespace std;
const int SIZE = 2;

void printTitles(vector<Media*> &);
int main(){
  Media* list[SIZE];
  vector<Media*> v;
  char* testing = new char[100];
  strcpy(testing, "Testing Complete");
  list[0] = new Title(testing);
  v.push_back(list[0]);
}

void printTitles(vector<Media*> & newv){
  for(vector<Media*>::iterator it = newv.begin(); it != newv.end(); it++) {
    cout << (*it)->getTitle() << endl;
  }
}
