#include <iostream>
#include <list>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main()
{
    list<int> coll;
    list<int>::iterator pos;

    for (int i= 20; i<=40; ++i)
    {
        coll.push_back(i);
    }

    pos = find (coll.begin(),coll.end(),3); //fails, find() returns the end of the processed range (coll.end());

    reverse (pos, coll.end());  //It is a operation that has no effect.

    list<int>::iterator pos25, pos35;
    pos25 = find (coll.begin(),coll.end(),25);
    pos35 = find (coll.begin(),coll.end(),35);

    cout << "max: " << *max_element (pos25, pos35) << endl; //-note: including pos25 but excluding pos35
    cout << "max: " << *max_element (pos25, ++pos35) << endl; //Process the elements including the last position

    system("pause");
    return 0;
}