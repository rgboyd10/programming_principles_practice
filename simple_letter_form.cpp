/*
Write a program that produces a simple form letter based on user input.
*/
#include <iostream>
using namespace std;

int main()
{
  //declare variables
  string first_name;
  string friend_name;

  //read and write a first name
  cout << "Please enter the first name of the person you want to write to (followed by 'enter'):\n";
 
  cin >> first_name;
  cout << "Dear " << first_name << ",\n Have you seen " << friend_name << "lately?" ;
}
