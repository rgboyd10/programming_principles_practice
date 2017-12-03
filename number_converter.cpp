#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  //declare variables
  vector<string> numStrings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};  
  vector<int>  numDigits = {0,1,2,3,4,5,6,7,8,9,10};
  
  int userinDigit;
  string userinString;
  
  //prompt user for a number between 0-10
  cout << "Please enter a number between 0-10.\n";
  cin >> userinDigit;

  //prompt user for a string number between zero and ten
  cout << "Please enter a number between zero and ten in non-digit format to see it in digit format.\n";
  cin >> userinString;

  
  //find the match and print the match
  switch(userinDigit)
    {
    case 0: cout << numStrings[0] << "\n";
	break;
    case 1: cout << numStrings[1] << "\n";
	break;
    case 2: cout << numStrings[2] << "\n";
	break;
    case 3: cout << numStrings[3] << "\n";
	break;
    case 4: cout << numStrings[4] << "\n";
      break;
    case 5: cout << numStrings[5] << "\n";
	break;
    case 6: cout << numStrings[6] << "\n";
	break;
    case 7: cout << numStrings[7] << "\n";
	break;
    case 8: cout << numStrings[8] << "\n";
	break;
    case 9: cout << numStrings[9] << "\n";
	break;
    case 10: cout << numStrings[10] << "\n";
	break;
    default: cout << "That's not a digit I'm looking for.\n";
      break;
    }
  
  //find the match and print the match
  if(userinString == "zero")
    {
      cout << numDigits[0] << ".\n";
    }
  else if(userinString == "one")
    {
      cout << numDigits[1] << ".\n";
    }
  else if(userinString == "two")
    {
      cout << numDigits[2] << ".\n";
    }
  else if(userinString == "three")
    {
      cout << numDigits[3] << ".\n";
    }
  else if(userinString == "four")
    {
      cout << numDigits[4] << ".\n";
    }
  else if(userinString == "five")
    {
      cout << numDigits[5] << ".\n";
    }
  else if(userinString == "six")
    {
      cout << numDigits[6] << ".\n";
    }
  else if(userinString == "seven")
    {
      cout << numDigits[7] << ".\n";
    }
  else if(userinString == "eight")
    {
      cout << numDigits[8] << ".\n";
    }
  else if(userinString == "nine")
    {
      cout << numDigits[9] << ".\n";
    }
  else if(userinString == "ten")
    {
      cout << numDigits[10] << ".\n";
    }
}
