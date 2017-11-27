#include <iostream>

using namespace std;

int main()
{
  double max;
  double min;
  double mToCm = 100.00;
  double inToCm = 2.54;
  double ftToIn = 12.00;
  string maxUnit;
  string minUnit;
  
  while(cin != "|")
    {
      cout << "Please enter two doubles, each followed by a unit of measurement such as cm, in, ft, or m.  After each double and unit of measurement, please hit 'enter'.  If you enter |, the program will end.\n";
      
      cin >> max >> maxUnit >> min >>  minUnit;

      if(maxUnit != "cm" || maxUnit != "in" || maxUnit != "ft" || maxUnit != "m" || minUnit != "cm" || minUnit != "in" || minUnit != "ft" || minUnit != "m")
	{
	  cout << "That is an invalid unit of measurement.  Please enter cm, in , ft, or m next time.\n";
	}

      else if(max > min)
	{
	  cout << "The larger value is " << max << " " << maxUnit << ".\n The smaller value is " << min  << " " << minUnit << ".\n";
	}
      else if(min > max)
	{
	  cout << "The larger value is " << min << " " << minUnit << ".\n The smaller value is " << max << " " << maxUnit << ".\n";
	}
      else if(max == min)
	{
	  cout << "The values " << min << " " << minUnit <<  " and " << max << " " << maxUnit << " are the same.\n";
	}
      else if(max - min < 1.0 || min - max < 1.0)
	{
	  cout << "The numbers are almost equal.\n";
	}
    }
  
  return 0;
}
