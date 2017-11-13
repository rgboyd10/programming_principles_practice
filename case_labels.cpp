#include <iostream>

using namespace std;

int main()
{
  //case labels must be constants

  //define alternatives
  int y = 'y'; // this is ging to cause trouble
  constexpr char n = 'n';
  consteprc char m = '?';
  cout << "Do you like fish?\n";
  char a;
  cin >> a;
  switch(a)
    {
    case n:
      //...
      break;
    case y: // error: variable in case label
      //...
      break;
    case m:
      //...
      break;
    case 'n': //error: duplcate case label (n's value is 'n')
      //...
      break;
    default:
      //...
      break;
    }
}
