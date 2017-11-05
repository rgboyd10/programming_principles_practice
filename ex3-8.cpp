/*
Write a program to test an integer value to determine if it is odd or even.  As always, make sure your output is clear and complete.  in other wors, don't just ouput yes or no.  Your ouput should stand alone, like The value 4 is an even number.  Hint - See the remained modulo operator is 3.4.
*/
#include <iostream>

using namespace std;

int main()
{
  //declare variables
  int num;

  //promt the user to enter a variable
  cout << "Please enter a number, followed by 'enter'.";
  
  //read user input into the variable
  cin >> num;
  
  //test if the number is odd or even and tell the user the results
  if(num % 2 == 0)
    {
      cout << "The number " << num << " is even.\n";
    }
  else
    {
      cout << "The number " << num << " is odd.\n"; 
    }
}
