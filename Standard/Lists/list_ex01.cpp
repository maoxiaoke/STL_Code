#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

int main()
{
    list<char> coll;

    for (char c='a'; c<='z'; ++c)
    {
        coll.push_back(c);
    }

    while (! coll.empty())          //return whether the container has no elements
    {
        cout << coll.front() << " ";
        coll.pop_front();           //remove the first elements
    }
    cout << endl;
    system("pause");
    return 0;

}