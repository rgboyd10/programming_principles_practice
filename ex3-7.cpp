/*
Do exercise 6 but with three string variables.  So, if the user enters the values Steinbeck, Hemingway, Fitzgerald, the ouput should be Fitgerald, Hemingway, Steinbeck.
*/

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
  //declare variables
  string val1;
  string val2;
  string val3;

  vector<string> words;
  
  //prompt user and read in the values
  cout << "Please enter 3 words, each followed by 'enter'.";
  cin >> val1 >> val2 >> val3;

  //put the values in the vector
  words.push_back(val1);
  words.push_back(val2);
  words.push_back(val3);

  //sort the vector
  sort(words.begin(), words.end());

  //display the words the stdout
  for(int x = 0; x < words.size(); x++)
    {
      cout << words[x] << ".\n";
    }
  
}
