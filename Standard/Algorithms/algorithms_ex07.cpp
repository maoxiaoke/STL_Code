#include <algorithm>
#include <cstdlib> //for abs()
#include <iostream>
#include <list>

using namespace std;

bool isPrime(int number) {
  number = abs(number);

  if (number == 0 || number == 1) {
    return true;
  }

  int divisor;
  for (divisor = number / 2; number % divisor != 0; --divisor) {
    ;
  }
  return divisor == 1;
}
/*
* Unary predicates
*/
int main() {
  list<int> coll;
  for (int i = 24; i <= 30; ++i) {
    coll.push_back(i);
  }
  list<int>::iterator pos;
  pos = find_if(coll.begin(), coll.end(), isPrime);
  if (pos != coll.end()) { // found
    cout << *pos << " is first prime number found " << endl;
  } else {
    cout << "no prime number found " << endl;
  }
  system("pause");
}