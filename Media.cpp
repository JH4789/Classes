#include <iostream>
#include <cstring>
#include "Media.h"
using namespace std;


Media::Title(char* newtitle){
  title = new char[100];
  strcpy(title, newtitle);
  return 0;
}
char* Media::getTitle() {
  return title;
}
