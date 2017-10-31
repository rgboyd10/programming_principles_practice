/*Write a program that prompts the user to enter two integer values.  Store these values in int variables named val1 and val2.  Write your program to determine the smaller, larger, sum, difference, product, and ratio of these values and report them to the user.*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  //declare variables
  int val1;
  int val2;
  int larger;
  int smaller;
  int sum;
  int difference;
  int product;
  float ratio;
  
  //request the user to enter values
  cout << "Please enter two numbers, each followed by enter.\n";
  cin >> val1 >> val2;
  
  if(val1 > val2)
    {
    larger = val1;
    smaller = val2;
    cout << "Larger is " << larger << ".\n";
    cout << "Smaller is " << smaller << ".\n";
    }
  else if (val2 > val1)
    {
    larger = val2;
    smaller = val1;
    cout << "Larger is " << larger << ".\n";
    cout << "Smaller is " << smaller << ".\n";
    }
  else
    {
    cout << "The values are the same.\n";
    larger = val2;
    smaller =  val2;
    }
  
  sum = val1 + val2;
  cout << "The sum is " << sum << ".\n";

  difference = larger - smaller;
  cout << "The difference is " << difference << ".\n";

  product = val1 * val2;
  cout << "The product is " << product << ".\n";

  ratio = larger / smaller;
  cout << "The ratio of the values is " << ratio << ".\n";
}
