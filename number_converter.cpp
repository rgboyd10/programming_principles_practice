#include <iostream>
using namespace std;

int main()
{
  //declare variables
  vector <string> numStrings = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
  vector <int>  numDigits = {0,1,2,3,4,5,6,7,8,9,10};
  int userinDigit;
  string userinString;
  
  //prompt user for a number between 0-10
  cout << "Please enter a number between 0-10.\n";
  cin >> userinDigit;
  
  //find the match and print the match
  switch(userinDigit)
    {
    case '0': cout << numStrings[0] << "\n";
	break;
    case '1': cout << numStrings[1] << "\n";
	break;
    case '2': cout << numStrings[2] << "\n";
	break;
    case '3': cout << numStrings[3] << "\n";
	break;
    case '4': cout << numStrings[4] << "\n";
      break;
    case '5': cout << numStrings[5] << "\n";
	break;
    case '6': cout << numStrings[6] << "\n";
	break;
    case '7': cout << numStrings[7] << "\n";
	break;
    case '8': cout << numStrings[8] << "\n";
	break;
    case '9': cout << numStrings[9] << "\n";
	break;
    case '10': cout << numStrings[10] << "\n";
	break;
    }

  //prompt user for a string number between zero and ten
  cout << "Please enter a number between zero and ten in non-digit format to see it in digit format.\n";
  cin >> userinString;

  //find the match and print the match
  switch(userinString)
    {
    case 'zero': cout << numDigits[0] << "\n";
      break;
    case 'one': cout << numDigits[0] << "\n";
      break;
    case 'two': cout << numDigits[0] << "\n";
      break;
    case 'three': cout << numDigits[0] << "\n";
      break;
    case 'four': cout << numDigits[0] << "\n";
      break;
    case 'five': cout << numDigits[0] << "\n";
      break;
    case 'six': cout << numDigits[0] << "\n";
      break;
    case 'seven': cout << numDigits[0] << "\n";
      break;
    case 'eight': cout << numDigits[0] << "\n";
      break;
    case 'nine': cout << numDigits[0] << "\n";
      break;
    case 'ten': cout << numDigits[0] << "\n";
      break;
    }  
}
