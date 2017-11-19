//simple dictionary: list of sorted words
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  vector <string> words;
  for(string temp; cin >> temp;) // read whtespae-separated words
    words.push_back(temp); //put into a vector
  cout << "Number of words: " << words.size() << '\n';
  sort(words.begin(), words.end()); //sort the words
  for(int i = 0; i < words.size(); i++)
    if(i == 0 || words[i-1]!=words[i]) //is this a new word?
      cout << words[i] << "\n";
}
