#include <iostream>
using namespace std;

//converts from inches to centimeters or centimeters to inches
//a suffix 'i' or 'c' indicates the unit of the input
//any other suffix is an error

int main()
{
  constexpr double cm_per_inch = 2.54; //number of centimeters in an inche
  double length = 1; //length in inches or cetimeters

  char unit = ''; //a space is not a unit

  cout << "Please enter a length followed by a unit (c or i):\n";
  cin >> length >> unit;

  if(unit == 'i')
    cout << length << "in ==" << cm_per_inch * length << "cm\n";
  else if (unit=='c')
    cout << length << "cm ==" << length / cm_per_inch << "in\n";
  else
    cout <<"Sorry, I don't know a unit called '" << unit << "'\n";
}
