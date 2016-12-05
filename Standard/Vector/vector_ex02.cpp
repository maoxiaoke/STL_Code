#include <algorithm>
#include <iostream>
#include <iterator>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

// the following example shows a simple usage of vector
int main() {
  vector<string> sentence;

  sentence.reserve(5);
  sentence.push_back("Hello,");
  sentence.push_back("how");
  sentence.push_back("are");
  sentence.push_back("you");
  sentence.push_back("?");

  copy(sentence.begin(), sentence.end(), ostream_iterator<string>(cout, " "));
  cout << endl;

  cout << "max_size(): " << sentence.max_size() << endl;
  cout << "size():     " << sentence.size() << endl;
  cout << "capacity(): " << sentence.capacity() << endl;

  swap(sentence[1], sentence[3]);

  sentence.insert(find(sentence.begin(), sentence.end(), "?"), "always");

  sentence.back() = "!";

  copy(sentence.begin(), sentence.end(), ostream_iterator<string>(cout, " "));
  cout << endl;

  cout << "max_size(): " << sentence.max_size() << endl;
  cout << "size():     " << sentence.size() << endl;
  cout << "capacity(): " << sentence.capacity() << endl;

  system("pause");
  return 0;
}
