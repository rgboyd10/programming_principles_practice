/*Write a program that prompts the user to enter three integer values, and then ouputs the values in numerical sequence separated by commas.  So, if the user enters the values 10 4 6, the output should be 4, 6, 10.  If two values are the same, they should just be ordered together.  So, the input 4 5 4 should give 4, 4, 5.*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  int val1;
  int val2;
  int val3;
  int maximum;
  int minimum;
  int middle;
  vector <int> nums;
  
  cout << "Please enter three integer values, each followed by 'enter'.";
  cin >> val1 >> val2 >> val3;

  maximum = max(val1, val2, val3);
  minimum = min(val1, val2, val3);

  for(int x = 0; x < nums.size(); x++)
    {
      if(nums[x] <= nums[x-1]
	{
	  minimum = nums[x];
	}
    }
  
}
