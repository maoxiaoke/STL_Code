#include <algorithm>
#include <cstdlib>
#include <deque>
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
  string firstname() const;
  string lastname() const;
};

bool personSortCriterion(const Person &p1, const Person &p2) {
  return p1.lastname() < p2.lastname() ||
         (!(p2.lastname() < p1.lastname()) && p1.firstname() < p2.firstname());
}

int main() {
  deque<Person> coll;
  sort(coll.begin(), coll.end(), personSortCriterion);
}
