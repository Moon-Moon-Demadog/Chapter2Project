#include <iostream>
using namespace std;
// Ocean level project one

int main ()
{
 double EnergyDrink, CitrusFlavor, CitrusLovers;
  int Customers, TotalDrink = 2475;
  EnergyDrink = 15;
  CitrusFlavor = 58;
  CitrusLovers = TotalDrink * CitrusFlavor/100;
  Customers = 16500;
  TotalDrink = 2475;
  cout << "A store surveyed " << Customers << " on what drinks they enjoy." << endl;
  cout << "Of those cutomers, only " << EnergyDrink << "% consume energy drinks." << endl;
  cout << "Approximately " << TotalDrink << " customers imbibe in energy drinks." << endl;
  cout << "Of those " << CitrusFlavor << "% love citrus flavored energy drinks. " << endl;
  cout << "A total of " << CitrusLovers << " customers drink the citrus energy drinks." << endl;
  return 0;
}