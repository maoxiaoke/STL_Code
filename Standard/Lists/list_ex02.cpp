#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

int main()
{
    list<char> coll;

    for(char c='a'; c<='z'; ++c)
    {
        coll.push_back(c); 
    }

    /*
    * container::const_iterator
    * is provided to iterate over elements in read-only mode
    */
    list<char>::const_iterator pos;     
    for(pos=coll.begin();pos != coll.end(); ++pos)
    {
        cout << *pos << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}
