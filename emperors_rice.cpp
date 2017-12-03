#include <iostream>
using namespace std;

int main()
{
  //declare variables
  int squareNum = 1;
  double grainNum = 1;
  int oneThousand;
  int oneMillion;
  int oneBillion;
  //print the squares and grains as they progress
  while(squareNum < 64)
    {
      cout << squareNum << "\t" << grainNum << "\n";
      grainNum = grainNum * 2;
      squareNum++;

      if(grainNum > 1000 && grainNum < 2000)
	{
	  oneThousand = squareNum;
	}

       if(grainNum > 1000000 && grainNum < 2000000)
	{
	  oneMillion = squareNum;
	}

       if(grainNum > 1000000000 && grainNum < 2000000000)
	{
	  oneBillion = squareNum;
	}
    }

   cout << "The number of squares necessary to give the inventor 1000 grains of rice is " << oneThousand << ".\n";

   cout << "The number of squares necessary to give the inventor 1,000,000 grains of rice is " << oneMillion << ".\n";

   cout << "The number of squares necessary to give the inventor 1,000,000,000 grains of rice is " << oneBillion << ".\n";
}
