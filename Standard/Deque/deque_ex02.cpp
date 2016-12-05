#include <algorithm>
#include <deque>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <string>

using namespace std;

// the following example shows a simple usage of vector
int main() {
  deque<string> coll;

  coll.assign(3, string("string")); // string is a type
  coll.push_back("last string");
  coll.push_front("first string");

  copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));
  cout << endl;

  coll.pop_front();
  coll.pop_back();

  for (int i = 1; i < coll.size(); ++i) {
    coll[i] = "another " + coll[i];
  }

  coll.resize(4, "resized string");
  copy(coll.begin(), coll.end(), ostream_iterator<string>(cout, "\n"));

  system("pause");
}