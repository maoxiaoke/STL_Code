#include <iostream>
#include <set>
#include <stdlib.h>
using namespace std;

//the following example shows a simple usage of lower_bound/upper_bound/equal_range of set
int main() {
  set<int> c;

  c.insert(1);
  c.insert(2);
  c.insert(4);
  c.insert(5);
  c.insert(6);
  c.insert(7);

  cout << "lower_bound(3): " << *c.lower_bound(3) << endl;
  cout << "upper_bound(3): " << *c.upper_bound(3) << endl;
  cout << "equal_range(3): " << *c.equal_range(3).first << " "
       << *c.equal_range(3).second << endl;
  cout << endl;
  cout << "lower_bound(5): " << *c.lower_bound(5) << endl;
  cout << "upper_bound(5): " << *c.upper_bound(5) << endl;
  cout << "equal_range(5): " << *c.equal_range(5).first << " "
       << *c.equal_range(5).second << endl;

  system("pause");
  return 0;
}