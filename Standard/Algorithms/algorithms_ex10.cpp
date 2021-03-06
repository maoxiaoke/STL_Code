#include "print.hpp"
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <list>

using namespace std;
/*
* function objects
*/
class AddValue {
private:
  int thevalue;

public:
  AddValue(int v) : thevalue(v) {}
  void operator()(int &elem) const { elem += thevalue; }
};
int main() {
  list<int> coll;
  for (int i = 1; i <= 9; ++i) {
    coll.push_back(i);
  }
  PRINT_ELEMENTS(coll, "initialized: ");
  for_each(coll.begin(), coll.end(), AddValue(10));
  PRINT_ELEMENTS(coll, "after adding 10: ");
  for_each(coll.begin(), coll.end(), AddValue(*coll.begin()));
  PRINT_ELEMENTS(coll, "after adding first element: ");

  system("pause");
}