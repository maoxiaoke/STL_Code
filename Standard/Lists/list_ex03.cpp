#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#include <stdlib.h>

using namespace std;

// the following example shows a simple usage of list
void printLists(const list<int> &l1, const list<int> &l2) {
  cout << "list1: ";
  copy(l1.begin(), l1.end(), ostream_iterator<int>(cout, " "));
  cout << endl << "list2: ";
  copy(l2.begin(), l2.end(), ostream_iterator<int>(cout, " "));
  cout << endl << endl;
}
int main() {
  list<int> list1, list2;
  for (int i = 0; i < 6; ++i) {
    list1.push_back(i);
    list2.push_front(i);
  }
  printLists(list1, list2);

  list2.splice(find(list2.begin(), list2.end(), 3), // destination position
               list1);                              // source list
  printLists(list1, list2);

  // move first elements to the end
  list2.splice(list2.end(),    // destination position
               list2,          // source list
               list2.begin()); // soucre position

  // sort second list, assign to list1 and remove duplicates
  list2.sort();
  list1 = list2;
  list2.unique();
  printLists(list1, list2);

  // merge both sorted lists into the first lists
  list1.merge(list2);
  printLists(list1, list2);

  system("pause");
  return 0;
}