#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <stdlib.h>
using namespace std;

// show a example of using distance()
int main() {
  list<int> coll;

  for (int i = -3; i <= 9; ++i) {
    coll.push_back(i);
  }

  list<int>::iterator pos;
  pos = find(coll.begin(), coll.end(), 5);
  if (pos != coll.end()) {
    cout << "difference between beginning and 5: "
         << distance(coll.begin(), pos) << endl;
  } else {
    cout << "5 not found" << endl;
  }
  system("pause");
  return 0;
}