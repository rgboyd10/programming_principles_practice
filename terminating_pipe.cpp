#include <iostream>

using namespace std;

int main()
{
  double max;
  double min;
  double mToCm = 100.00;
  double inToCm = 2.54;
  double ftToIn = 12.00;
  double inToM = 0.0254;
  double cmToM = 0.01;
  double ftToM = 0.3048;
  double sum;
  int countNums;
  string maxUnit;
  string minUnit;
  
  while(max != '|' || min != '|' || maxUnit != "|" || minUnit != "|")
    {
      cout << "Please enter two doubles, each followed by a unit of measurement such as cm, in, ft, or m.  After each double and unit of measurement, please hit 'enter'.  If you enter |, the program will end.\n";
      
      cin >> max >> maxUnit >> min >>  minUnit;
      sum += max + min;
      countNums++;
      countNums++;
      
      if(maxUnit != "cm" || maxUnit != "in" || maxUnit != "ft" || maxUnit != "m" || minUnit != "cm" || minUnit != "in" || minUnit != "ft" || minUnit != "m")
	{
	  cout << "That is an invalid unit of measurement.  Please enter cm, in , ft, or m next time.\n";
	}
      else if(max > min)
	{
	  cout << "The larger value is " << max << " " << maxUnit << ".\n The smaller value is " << min  << " " << minUnit << ".\n";
	  if(minUnit == "cm") sum += min * cmToM;
	  if(minUnit == "in") sum += min * inToM;
	  if(minUnit == "ft") sum += min * ftToM;
	  if(maxUnit == "cm") sum += max * cmToM;
	  if(maxUnit == "in") sum += max * inToM;
	  if(maxUnit == "ft") sum += max * ftToM;
	}
      else if(min > max)
	{
	  cout << "The larger value is " << min << " " << minUnit << ".\n The smaller value is " << max << " " << maxUnit << ".\n";
	  if(minUnit == "cm") sum += min * cmToM;
	  if(minUnit == "in") sum += min * inToM;
	  if(minUnit == "ft") sum += min * ftToM;
	  if(maxUnit == "cm") sum += max * cmToM;
	  if(maxUnit == "in") sum += max * inToM;
	  if(maxUnit == "ft") sum += max * ftToM;
	}
      else if(max == min)
	{
	  cout << "The values " << min << " " << minUnit <<  " and " << max << " " << maxUnit << " are the same.\n";
	  if(minUnit == "cm") sum += min * cmToM;
	  if(minUnit == "in") sum += min * inToM;
	  if(minUnit == "ft") sum += min * ftToM;
	  if(maxUnit == "cm") sum += max * cmToM;
	  if(maxUnit == "in") sum += max * inToM;
	  if(maxUnit == "ft") sum += max * ftToM;
	}
      else if(max - min < 1.0 || min - max < 1.0)
	{
	  cout << "The numbers are almost equal.\n";
	  if(minUnit == "cm") sum += min * cmToM;
	  if(minUnit == "in") sum += min * inToM;
	  if(minUnit == "ft") sum += min * ftToM;
	  if(maxUnit == "cm") sum += max * cmToM;
	  if(maxUnit == "in") sum += max * inToM;
	  if(maxUnit == "ft") sum += max * ftToM;
	}

      cout << "The sum is " << sum << ".\n";
      cout << "The number of values is " << countNums << ".\n";
    }
  
  return 0;
}
