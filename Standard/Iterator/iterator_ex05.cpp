#include "print.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <stdlib.h>

using namespace std;

//show a example of using iter_swap()
int main() {
  list<int> coll;

  for (int i = 1; i <= 9; ++i) {
    coll.push_back(i);
  }
  PRINT_ELEMENTS(coll);

  iter_swap(coll.begin(), ++coll.begin());

  PRINT_ELEMENTS(coll);

  iter_swap(coll.begin(), --coll.end());

  PRINT_ELEMENTS(coll);
  system("pause");
}