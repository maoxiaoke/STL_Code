#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <stdlib.h>

using namespace std;

// show a example of using advance()
int main() {
  list<int> coll;
  for (int i = 1; i <= 9; ++i) {
    coll.push_back(i);
  }
  list<int>::iterator pos = coll.begin();
  cout << *pos << endl;

  // step three elements forward
  advance(pos, 3);
  cout << *pos << endl;
  // step one element backward
  advance(pos, -1);
  cout << *pos << endl;

  system("pause");
  return 0;
}