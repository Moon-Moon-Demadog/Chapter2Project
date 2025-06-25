#include <iostream>
using namespace std;
// Gas rate, project two, how far will one tank of gas get you?

int main ()
{
  double CityMiles, HighwayMiles, City, Highway;
  int Gallons = 20;
  City = 23.5;
  Highway = 28.9;
  CityMiles = Gallons * City;
  HighwayMiles = Gallons * Highway;

  cout << " Lets figure the efficency of a car on the highway vs the city." << endl;
  cout << "An average car holds " << Gallons << " gallons, and has an average of " << City << "mpg for the city";
  cout << " and for the highway " << Highway << "mpg." << endl;
  cout << "So traveling on the highway you can expect to go " << HighwayMiles << " miles." << endl;
  cout << "Now traveling in the city you can expect to go " << CityMiles << " miles." << endl;
  return 0;
}