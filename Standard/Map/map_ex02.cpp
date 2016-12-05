#include <iostream>
#include <map>
#include <stdlib.h>
#include <string>

using namespace std;

// the following example shows thes use of a map as an associative array.

int main() {
  typedef map<string, float> StringFloatMap;
  StringFloatMap stocks;

  stocks["BASF"] = 369.50;
  stocks["VM"] = 413.50;
  stocks["Daimler"] = 819.00;
  stocks["BMW"] = 834.00;
  stocks["Siemens"] = 842.20;

  StringFloatMap::iterator pos;
  for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
    cout << "stock: " << (*pos).first << "\t"
         << "price: " << (*pos).second
         << endl; // pos->first is also useful for coding
  }
  cout << endl;

  // all prices doubled
  for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
    (*pos).second *= 2;
  }

  for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
    cout << "stock: " << (*pos).first << "\t"
         << "price: " << (*pos).second << endl;
  }
  cout << endl;

  /*
  *rename key form "VW" to "Volkswagen"
  *-only provided by exchanging element
  */
  stocks["Volkswagen"] = stocks["VM"];
  stocks.erase("VM");

  for (pos = stocks.begin(); pos != stocks.end(); ++pos) {
    cout << "stock: " << (*pos).first << "\t"
         << "price: " << (*pos).second << endl;
  }
  cout << endl;

  system("pause");
}