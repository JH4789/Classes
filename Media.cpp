#include <iostream>
#include <cstring>
#include "Media.h"
using namespace std;


void Media::Title(char* newtitle){
  title = new char[100];
  strcpy(title, newtitle);
}
void Media::Year(int newyear){
  year = newyear;
}
char* Media::getTitle() {
  return title;
}
int Media::getYear() {
  return year;
}
