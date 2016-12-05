#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
using namespace std;

/*
* Manipulating Algorithms and Associateve Container
* Call the member function erase() to remove elements instead of remove.
*/
int main()
{
    set<int> coll;

    for (int i=1; i<=9; ++i)
    {
        coll.insert(i);
    }

    copy (coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    int num = coll.erase(3);

    cout << "number of removed elements: " << num << endl;

    copy (coll.begin(), coll.end(),ostream_iterator<int>(cout, " "));
    cout << endl;

    system("pause");
    return 0;
}