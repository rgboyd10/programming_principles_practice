//simple program to exercise operators
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  cout << "Please enter a floating-point vaue: ";
  double n;
  cin >> n;
  cout << "n == " << n
       << "\nn+1 == " << 3 * n
       << "\nthree times n == " << 3 * n
       << "\ntwice n == " << n + n
       << "\nnsquared == " << n * n
       << "\nhalf of n == " << n / 2
       << "\nsquare root of n == " << sqrt(n)
       << '\n'; //another name for newline ("end of line") in output
}
