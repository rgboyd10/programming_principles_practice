#include <iostream>
using namespace std;

int main()
{
  //declare variables
  double val1;
  double val2;
  double result;
  char operand;
  
  //prompt the user for the values and operand
  cout << "Please enter two numbers and the matematical operation that you would like to perform on those numbers, + - / * each followed by enter.\n";

  cin >> val1 >> val2 >> operand;

  //ifelse to based on the operand to perform the calculations and assign a result
  if(operand == '+')
    {
      result = val1 + val2;
    }
  else if(operand == '-')
    {
      result = val1 - val2;
    }
  else if(operand == '*')
    {
      result = val1 * val2;
    }
  else if(operand == '/')
    {
      result = val1 / val2;
    }
  
  //print the result
  cout << val1 << " " << operand << " " << val2 << " = " << result << ".\n";
  
}
