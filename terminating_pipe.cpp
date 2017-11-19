#include <iostream>

using namespace std;

int main()
{
  int userin1;
  int userin2;
  
  while(cin)
    {
      cout << "Please enter two integers, each followed by 'enter'.  If you enter |, the program will end.\n";
      cin >> userin1 >> userin2;
      if(userin1 == '|' || userin2 == '|')
	{
	  cout << "You have entered a pipe.  The program will now end.";
	  break;
	  }
      cout << userin1 << "\t" << userin2 << "\n";
    }
  return 0;
}
