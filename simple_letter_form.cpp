/*
Write a program that produces a simple form letter based on user input.
*/
#include <iostream>
using namespace std;

int main()
{
  //read and write a first name
  cout << "Please enter the first name of the person you want to write to (followed by 'enter'):\n";
  string first_name;
  cin >> first_name;
  cout << "Dear " << first_name << ",\n";
}
