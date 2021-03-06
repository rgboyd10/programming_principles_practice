/*Write a program that prompts the user to enter three integer values, and then ouputs the values in numerical sequence separated by commas.  So, if the user enters the values 10 4 6, the output should be 4, 6, 10.  If two values are the same, they should just be ordered together.  So, the input 4 5 4 should give 4, 4, 5.*/

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
  //declare the variables
  int val1;
  int val2;
  int val3;
  vector <int> nums;

  //prompt the user to input data
  cout << "Please enter three integer values, each followed by 'enter'.";
  cin >> val1 >> val2 >> val3;

  //
  nums.push_back(val1);
  nums.push_back(val2);
  nums.push_back(val3);

  sort(nums.begin(), nums.end());

  for(int x = 0; x < nums.size(); x++)
    {
      cout << nums[x] << ".\n";
    }
}
