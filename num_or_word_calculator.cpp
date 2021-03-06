#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  //declare variables
  string val1;
  double numval1;
  string val2;
  double numval2;
  
  double result;
  char operand;
  
  //prompt the user for the values and operand
  cout << "Please enter two numbers (0-9) in either numeric or text format and the matematical operation that you would like to perform on those numbers, + - / * each followed by enter.\n";

  cin >> val1 >> val2 >> operand;

  //convert val1 if it's string
  if(val1 == "zero" || val1 == "0" || val1 == "0.0")
    {
      numval1 = 0.0;
    }
  else if(val1 == "one" || val1 == "1" || val1 == "1.0")
    {
      numval1 = 1.0;
    }
  else if(val1 == "two" || val1 == "2" || val1 == "2.0")
    {
      numval1 = 2.0;
    }
  else if(val1 == "three" || val1 == "3" || val1 == "3.0")
    {
      numval1 = 3.0;
    }
  else if(val1 == "four" || val1 == "4" || val1 == "4.0")
    {
      numval1 = 4.0;
    }
  else if(val1 == "five" || val1 == "5" || val1 == "5.0")
    {
      numval1 = 5.0;
    }
  else if(val1 == "six" || val1 == "6" || val1 == "6.0")
    {
      numval1 = 6.0;
    }
  else if(val1 == "seven" || val1 == "7" || val1 == "7.0")
    {
      numval1 = 7.0;
    }
  else if(val1 == "eight" || val1 == "8" || val1 == "8.0")
    {
      numval1 = 8.0;
    }
  else if(val1 == "nine" || val1 == "9" || val1 == "9.0")
    {
      numval1 = 9.0;
    }

  //convert val2 if it's string
 if(val2 == "zero" || val1 == "0" || val1 == "0.0")
    {
      numval2 = 0.0;
    }
  else if(val2 == "one" || val1 == "1" || val1 == "1.0")
    {
      numval2 = 1.0;
    }
  else if(val2 == "two" || val1 == "2" || val1 == "2.0")
    {
      numval2 = 2.0;
    }
  else if(val2 == "three" || val1 == "3" || val1 == "3.0")
    {
      numval2 = 3.0;
    }
  else if(val2 == "four" || val1 == "4" || val1 == "4.0")
    {
      numval2 = 4.0;
    }
  else if(val2 == "five" || val1 == "5" || val1 == "5.0")
    {
      numval2 = 5.0;
    }
  else if(val2 == "six" || val1 == "6" || val1 == "6.0")
    {
      numval2 = 6.0;
    }
  else if(val2 == "seven" || val1 == "7" || val1 == "7.0")
    {
      numval2 = 7.0;
    }
  else if(val2 == "eight" || val1 == "8" || val1 == "8.0")
    {
      numval2 = 8.0;
    }
  else if(val2 == "nine" || val1 == "9" || val1 == "9.0")
    {
      numval2 = 9.0;
    }
   
  //ifelse to based on the operand to perform the calculations and assign a result
  if(operand == '+')
    {
      result = numval1 + numval2;
    }
  else if(operand == '-')
    {
      result = numval1 - numval2;
    }
  else if(operand == '*')
    {
      result = numval1 * numval2;
    }
  else if(operand == '/')
    {
      result = numval1 / numval2;
    }
  
  //print the result
  cout << numval1 << " " << operand << " " << numval2 << " = " << result << ".\n";
  
}
