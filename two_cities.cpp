#include <vector>
#include <iostream>

using namespace std;

int main()
{
  //declare variables
  vector <double> distances;
  double distance1;
  double distance2;
  double mean;
  double sum;
  
  //prompt the user for distances
  cout << "Please enter the distance between the first city.\n";
  cin >> distance1;
  
  cout << "Please enter the distance between the second city.\n";
  cin >> distance2;

  //decide which is the largest/smallest distance
  if(distance1 > distance2)
    {
      cout << "The larger distance is " << distance1 << ".\n";
    }
  else if(distance1 == distance2)
    {
      cout << "The distances are the same.";
    }
  else
    {
      cout << "The larger distance is " << distance2 << ".\n";
    }

  //calculate the average of the distances
  mean = (distance1 + distance2) / 2.0;

  cout << "The mean is " << mean << ".\n";
}
