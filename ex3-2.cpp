/*Write a program in c++ that converts from miles to kilometers. Your program should have a reasonable prompt for the user to enter a number of miles.  Hint - there are only 1.609 kilometers to the mile.*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  //declare variables
  int miles;

  //prompt user
  cout << "Please enter a number of miles followed by enter.";
  cin >> miles;

  double kilometers = miles * 1.609;

  //list the converted number
  cout << "The number of kilometers in " << miles << " miles is " << kilometers << " kilometers.";
}
