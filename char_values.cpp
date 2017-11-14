#include <iostream>

using namespace std;

int main()
{
  const char ay = 'a';
  const char Aay = 'A';
  char lower_character_start = 'a';
  char upper_character_start = 'A';
  
  for(int x = 0; x < 26; x++)
    {
      cout << lower_character_start << "\t" <<  ay + x  << "\n";
      lower_character_start++;
    }

  for(int y = 0; y < 26; y++)
    {
      cout << upper_character_start << "\t" << Aay + y << "\n";
      upper_character_start++;
    }

  for(int z = 0; z <= 10; z++)
    {
      cout << z << "\n";
    }
}
