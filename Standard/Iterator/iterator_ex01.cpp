#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <algorithm>
#include <iterator>
#include <stdlib.h>
using namespace std;

int main()
{
    list<int> coll1;
    list<int>::iterator pos1;
    for (int i=1; i<=9; ++i)
    {
        coll1.push_back(i);
    }
    cout << "pos1:";
    for (pos1=coll1.begin(); pos1!=coll1.end(); ++pos1)
    {
        cout << *pos1 << " ";
    }
    cout << endl;

    //Blackinserters
    vector<int> coll2;
    vector<int>::iterator pos2;
    copy (coll1.begin(), coll1.end(), //source
            back_inserter(coll2));      //destination
    cout << "pos2:";
    for (pos2=coll2.begin(); pos2!=coll2.end(); ++pos2)
    {
        cout << *pos2 << " ";
    }
    cout << endl;

    //Front inserters
    deque<int> coll3;
    deque<int>::iterator pos3;
    copy (coll1.begin(), coll1.end(),   //source
             front_inserter(coll3));    //destination
    cout << "pos3:";
    for (pos3=coll3.begin(); pos3!=coll3.end(); ++pos3)
    {
        cout << *pos3 << " ";
    }
    cout << endl;

    //General inserters
    set<int> coll4;
    set<int>::iterator pos4;
    copy (coll1.begin(), coll1.end(),           //source
            inserter(coll4, coll4.begin()));    //destination
    cout << "pos4:";
    for (pos4=coll4.begin(); pos4!=coll4.end(); ++pos4)
    {
        cout << *pos4 << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}