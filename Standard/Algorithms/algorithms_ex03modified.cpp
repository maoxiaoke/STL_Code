#include <iostream>
#include <list>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
using namespace std;

int main()
{
    list<int> coll;

    //insert elements from 6 to 1 and 1 to 6
    for (int i=1; i<=6; ++i)
    {
        coll.push_front(i);
        coll.push_back(i);
    }

     //print all elements of the collection
    cout << "pre: ";
    copy (coll.begin(), coll.end(), ostream_iterator<int> (cout, " "));
    cout << endl;

    //-retain a new end
    list<int>::iterator end = remove (coll.begin(), coll.end(), 3);
    copy (coll.begin(), end, ostream_iterator<int> (cout, " "));
    cout << endl;

    //-function "distance" returns the distance between two iterators
    cout << "number of removed elements: " << distance (end, coll.end()) << endl;

    //remove "removed" elements
    coll.erase (end, coll.end());

    copy (coll.begin(), coll.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    system("pause");
    return 0;

}