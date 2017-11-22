#include <iostream>

using namespace std;

int main()
{
  double userin1;
  double userin2;
  
  while(cin != "|")
    {
      cout << "Please enter two integers, each followed by 'enter'.  If you enter |, the program will end.\n";
      
      cin >> userin1;
      
      cin >> userin2;
      
      if(userin1 > userin2)
	{
	  cout << "The smaller value is " << userin2 << ".\n The larger value is " << userin1 << ".\n";
	}
      else if(userin2 > userin1)
	{
	  cout << "The smaller value is " << userin1 << ".\n The larger value is " << userin2 << ".\n"; 
	}
      else if(userin2 == userin1)
	{
	  cout << "The values " << userin1 << " and " << userin2 << " are the same.\n";
	}

      if(userin2 - userin1 < 1.0 || userin1 - userin2 < 1.0)
	{
	  cout << "The numbers are almost equal.\n";
	}
    }
  
  return 0;
}
