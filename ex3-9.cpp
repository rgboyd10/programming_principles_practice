/*
Write a program that converts spelled-out numbers such as "zero" and "two" into digits, such as 0 and 2.  When the user inputs a number, the program should print out the correspoding digit.  do it for the values 0, 1, 2, 3, 4 and write out a not a number I know if the user enters something that doesn't correspond.
*/

#include <iostream>

using namespace std;

int main()
{
  //declare variables
  string userin;

  //prompt the user to input a number
  cout << "Please input a string zero, one, two, three, or four and hit 'enter'.\n";

  //read their input into the string variable
  cin >> userin;

  //decide which number to ouput and display it
  if(userin == "zero")
    {
      cout << "0\n";
    }
  else if(userin == "one")
    {
      cout << "1\n";
    }
  else if(userin == "two")
    {
      cout << "2\n";
    }
  else if(userin == "three")
    {
      cout << "3\n";
    }
  else if(userin == "four")
    {
      cout << "4\n";
    }
  else
    {
      cout << "I do not know that number.\n";
    }
}
