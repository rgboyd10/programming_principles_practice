//read name and age

#include <iostream>
#include <string>

using namespace std;

int main()
{
  cout << "Please enter your first name and age\n";
  string first_name; //string variable
  int age; //integer variable
  cin >> first_name; //read a string
  cin >> age; //read and integer
  cout << "Hello, " << first_name << "(age " << age << ")\n";
}
