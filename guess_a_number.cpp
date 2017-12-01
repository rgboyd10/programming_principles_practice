#include <iostream>

using namespace std;

int main()
{
  double userin;
  double number = 42;

  cout << "I'm thinking of a number, what is it?\n";

  while(userin != number)
    {
      cin >> userin;
      if(userin > number)
	{
	  cout << "Your guess is too high. Guess again!\n";
	}
      else if(userin < number)
	{
	  cout << "Your guess is too low. Guess again!\n";
	}
      else
	cout << "You're right!\n";
    }
  
}
