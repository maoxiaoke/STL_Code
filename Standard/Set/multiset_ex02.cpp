#include <iostream>
#include <iterator>
#include <set>
#include <stdlib.h>

using namespace std;

// the following example shows a simple usage of set
int main() {
  typedef multiset<int, greater<int> > IntSet; // warning:">>"would be parsed as shift operator
  IntSet coll1;

  coll1.insert(4);
  coll1.insert(3);
  coll1.insert(5);
  coll1.insert(1);
  coll1.insert(6);
  coll1.insert(2);
  coll1.insert(5);

  IntSet::iterator pos;
  for (pos = coll1.begin(); pos != coll1.end(); ++pos) {
    cout << *pos << " ";
  }
  cout << endl;

  // insert 4 again and process return values
  IntSet::iterator ipos = coll1.insert(4);
    cout << "4 inserted as element "
         << distance(coll1.begin(), ipos) + 1 << endl;

  // assign elements to another set with ascending order
  multiset<int> coll2(coll1.begin(), coll1.end());
  copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
  cout << endl;

  // remove all elements up to element with value 3
  coll2.erase(coll2.begin(), coll2.find(3));

  // remove all elements with value 5
  int num;
  num = coll2.erase(5);
  cout << num << " element(s) removed" << endl;

  copy(coll2.begin(), coll2.end(), ostream_iterator<int>(cout, " "));
  cout << endl;

  system("pause");
}