//compute mean and median temperatures
int main()
{
  vector <double> temps; //temperatures
  for(double temp; cin >> temp;) //read into temp
    temps.push_back(temp); //put temp into vector

  //compute mean temperatures:
  double sum = 0;
  for(double x : temps) sum +=x;
  cout << "Average temperatures: " << sum/temps.size() << '\n';

  //compute median temperature;
  sort(temps); //sort temperatures
  cout << "Median temperature: " << temps[temps.size()/2] << '\n';
}
