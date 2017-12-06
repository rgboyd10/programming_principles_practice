#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> primes;
  //fill the vector with all numbers to be removed upon comparison
  for(int a = 1; a < 100; a++)
    primes.push_back(a);
  
  //declare for loop to iterate, calculating primes
  for(int x = 1; x <= 100; x++)
    {
      for(int y = 1; y <= 100; y++)
	{
	  if(x % y == 0)
	    {
	      primes.erase(primes.begin() + 1);
	    }
	}
    }

  for(int b = 1; b < primes.size(); b++)
    {
      cout << primes[b] << "\n";
    }
}
