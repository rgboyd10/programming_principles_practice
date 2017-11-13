#include <iostream>
using namespace std;

int main()
{
  //declare variables
  const double yen = 0.0088;
  const double kroner = 0.16;
  const double pound = 1.31;
  char currency_choice;
  double amount;
  
  //prompt the user
  cout << "What would you like to convert to US dollars today? Yen(y), Kroner(k), or British Pound (p)?  Please enter one of the following followed by 'enter'.\ny\nk\np\n";
  cin >> currency_choice;

  cout << "How much " << currency_choice << " would you like to convert?\n";
  cin >> amount;

  switch(currency_choice)
    {
    case 'y':
      cout << amount << " yen " " = " << yen * amount << "dollars.\n";
      break;
    case 'k':
      cout << amount << " kroner " " = " << kroner * amount << " dollars.\n";
      break;
    case 'p':
      cout << amount << " pounds " " = " << pound * amount << "dollars.\n";
      break;
    default:
      cout << "Sorry, that was not an option.\n";
      break;
    }
}
