#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
  string title;
  int year;
} mine, yours;

void printmovie (movies_t movie);

int main ()
{99
  mine.title = "2001 A Space Odyssey";
  mine.year = 1968;
  getline (cin,yours.title);   ///input
  cin>> yours.year;
  printmovie (mine);
  printmovie (yours);
  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}
