#include <iostream>
using namespace std;
// Ocean level project one

int main ()
{
  double oceanLevel, riseRate, FiveYear, SevenYear, TenYear;
  oceanLevel = 2133.6;
    riseRate = 1.5;
  FiveYear = 5 * riseRate + 2133.6;
  SevenYear = 7 * riseRate + 2133.6;
  TenYear = 10 * riseRate + 2133.6;
  cout << "Our current ocean level of " << oceanLevel << " mm is experiencing a steady rise." << endl;
  cout << "Ocean levels are rising at a rate of " << riseRate << " mm per year." << endl;
  cout << "Within five years from now the new ocean level will be " << FiveYear << " mm." << endl;
  cout << " Seven years from now the ocean level will be " << SevenYear << " mm." << endl;
  cout << "And just ten years from now the ocean level will be " << TenYear << " mm." << endl;
  return 0;
}