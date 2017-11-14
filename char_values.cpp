#include <iostream>

using namespace std;

int main()
{
  const char ay = 'a';
  char character_start = 'a';
  int x;
  while(x < 26)
    {
      cout << character_start << "\t" <<  ay + x  << "\n";
      x++;
      character_start++;
    }
}
