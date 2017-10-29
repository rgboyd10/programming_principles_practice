/*
Write a program that produces a simple form letter based on user input.
*/
#include <iostream>
using namespace std;

int main()
{
  //declare variables
  string first_name;
  string friend_name;
  char friend_sex = 0;
  
  //read and write a first name
  cout << "Please enter the first name of the person you want to write to (followed by 'enter'):\n";
  cin >> first_name;

  cout << "Please enter the name of your friend (followed by 'enter'):\n";
  cin >> friend_name;
  
  cout << "Dear " << first_name << ",\n Have you seen " << friend_name << "lately?" ;

  cout << "Is your friend male or female? Enter m or f for either (followed by 'enter'):\n";
  cin >> friend_sex;
  
  if(friend_sex == 'm')
    {
      cout << "If you see " << friend_name << "please ask him to call me";
    }
  else if(friend_sex == 'f')
    {
      cout << "If you see " << friend_name << "please ash her to call me";
    }

}
