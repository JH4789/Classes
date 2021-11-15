#include <iostream>
#include <cstring>
using namespace std;

class Media {
  public:
  Title();
  Title(char*);
  char* getTitle();
private:
  char* title;
};
  
