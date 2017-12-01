//reading some temperatures into a vector
#include <vector>
#include <iostream>

using namespace std;

int main()
{
  vector <double> temps; //temperatures
  double median; //median
  
  cout << "Please enter a temperature followed by 'enter'."; //prompt the user
  for(double temp; cin >> temp;) //read into temp
    {
      cout << "Please enter a temperature followed by 'enter'. When you are finished, enter CTRL-D.\n"; //prompt the user
      temps.push_back(temp); //put temp into vector
    }
  //calculate the median and assign it to the median variable
  median = temps[temps.size() / 2];

  //display median
  cout << "The median is " << median << ".\n";

  
}
