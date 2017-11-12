#include <iostream>

int main()
{
  int a = 0;
  int b = 0;
  cou << "Please enter two integers\n";
  cin >> a >> b;

  if(a<b) //condition
          //1st alternative(take if condition is true):
    cout << "max(" << a << "," << b <<") is " << b << "\n";

  else
    //2nd alternative(taken if condition is false):
    cout << "max (" << a << "," << b <<") is " << a << "\n";
}
