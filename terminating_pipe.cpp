#include <iostream>

using namespace std;

int main()
{
  double max;
  double min;
  
  while(cin != "|")
    {
      cout << "Please enter two integers, each followed by 'enter'.  If you enter |, the program will end.\n";
      
      cin >> max;
      
      if(max > min)
	{
	  cout << "The larger value is " << max << ".\n The smaller value is " << min << ".\n";
	}
      else if(min > max)
	{
	  cout << "The larger value is " << min << ".\n The smaller value is " << max << ".\n";
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
