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

    //remove all elements with values 3
    //the old elements that were not overwrirtten by the algorithm remain unchanged
    remove (coll.begin(), coll.end(), 3);

    cout << "post: ";
    copy (coll.begin(), coll.end(), ostream_iterator<int> (cout, " "));
    cout <<endl;

    system("pause");
    return 0;
}

/*
* the output of the program:
* pre: 6 5 4 3 2 1 1 2 3 4 5 6
* post: 6 5 4 2 1 1 2 4 5 6 5 6
*/