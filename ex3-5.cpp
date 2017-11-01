/*Modify the program in exercise 4 to ask the user to enter floating-point values and store them in double variables.  Compare the outputs of the two programs for some inputs of your choice.  Are your results the same?  Should they be?  What's the difference?*/


#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
  //declare variables
  double val1;
  double val2;
  double larger;
  double smaller;
  double sum;
  double difference;
  double product;
  double ratio;
  
  //request the user to enter values
  cout << "Please enter floating point numbers, each followed by enter.\n";
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
