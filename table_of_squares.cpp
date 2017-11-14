#include <iostream>
#include <cmath>

using namespace std;

//calculating a printing a table of squares 0-99
int main()
{
  int i = 0; // start from 0
  while(i < 100)
    {
      cout << i << '\t' <<  pow(i,2) << '\n';
      i++; //incrementing i
    }
}
