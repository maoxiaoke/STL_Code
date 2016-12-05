#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

/*
* Function Objects
*/
class PrintInt {
public:
  void operator()(int elem) const { cout << elem << " "; }
};
int main() {
  vector<int> coll;
  for (int i = 1; i <= 9; ++i) {
    coll.push_back(i);
  }
  for_each(coll.begin(), coll.end(), PrintInt());
  cout << endl;
  system("pause");
}
