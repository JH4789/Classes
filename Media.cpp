#include <iostream>
#include "Media.h"
#include <cstring>
using namespace std;

Media::Title() {
  title = new char[100];
  
}
Media::Title(char* newtitle){
  title = new char[100];
  strcpy(title, newtitle);
}
char* Media::getTitle() {
  return title;
}
