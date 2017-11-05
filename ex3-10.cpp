/*
Write a program that takes an operation followed by two operands and outputs the result.  For example:
+100 3.15
* 4 5

Read the operation into a string called operation and use an if-statement to figure out which operation the user wants, for example if(operation == "+"). Read the operands into variables of type double. implement this for operations called +, -, *, /, plus, minus, mul, and div with their obvious meanings.
*/

#include <iostream>
using namespace std;

int main()
{
  //declare variables
  double operand1;
  double operand2;
  double result;
  string operation;
  
  //request the operator and operands from the user and read them into the variables
  cout << "Please enter the one of the folowed operands:\n +\n -\n *\n /\n plus\n minus\n mul\n div\nfollowed by two numbers of your choice each followed by 'enter':\n";
  cin >> operation >> operand1 >> operand2;

  //calculate the result and store it in a variable
  if(operation == "+")
    {
      result = operand1 + operand2;
    }
  else if(operation == "-")
    {
      result = operand1 - operand2;
    }
  else if(operation == "*")
    {
      result = operand1 * operand2;
    }
  else if(operation == "/")
    {
      result = operand1 / operand2;
    }
  else if(operation == "plus")
    {
      result = operand1 + operand2;
    }
  else if(operation == "minus")
    {
      result = operand1 - operand2;
    }
  else if(operation == "mul")
    {
      result = operand1 * operand2;
    }
  else if(operation == "div")
    {
      result = operand1 / operand2;
    }
  else
    {
      cout << "You've entered an operation that cannot be completed.";
    }

  //output the result
  cout << "The result of " << operand1 << " " << operation << " " << operand2 << " is " << result << ".\n";  
}
