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
  int age;
  
  //read and write a first name
  cout << "Please enter the first name of the person you want to write to (followed by 'enter'):\n";
  cin >> first_name;

  cout << "Please enter the name of another friend (followed by 'enter'):\n";
  cin >> friend_name;
  
  cout << "Dear " << first_name << ",\n Have you seen " << friend_name << " lately?\n" ;

  cout << "Is your friend male or female? Enter m or f for either (followed by 'enter'):\n";
  cin >> friend_sex;
  
  if(friend_sex == 'm')
    {
      cout << "If you see " << friend_name << " please ask him to call me.\n";
    }
  else if(friend_sex == 'f')
    {
      cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

  cout << "Please enter the age of " << first_name << " followed by 'enter'.\n";
  cin >> age;

  if(age <= 0 || age >= 110)
    {
      cout << "You're kidding!\n"; //std_lib_facilities compiliation error needs to be fixed.
    }
  
  cout << "I hear you just had a birthday and you are " << age << " years old.\n";

  if(age < 12)
    {
      cout << "Next year you will be " << age + 1 << ".\n";
    }
  else if(age == 17)
    {
      cout << "Next year you will be abe to vote.";
    }
  else if(age > 70)
    {
      cout << "I hope you are enjoying retirement.";
    }

  cout << "Yours sincerely,\n Russell ";
}
