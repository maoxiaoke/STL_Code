#include <iostream>
#include <map>
#include <string>
#include <stdlib.h>
using namespace std;

int main()
{
    /*
    * type of the container:
    * -map: elements key/value pairs
    * -string: keys have type string
    * -float: values have type float 
    */
    typedef map<string, float> StringFloatMap;
    StringFloatMap coll;

    coll["VAT"] = 0.15;
    coll["PI"] = 3.1415;
    coll["an arbitrary number"] = 4983.223;
    coll["Null"] = 0;

    /*
    * -element member first is the key
    * -element member second is the value
    * -elements are sorted by ASCII
    */
    StringFloatMap::iterator pos;
    for(pos = coll.begin(); pos != coll.end(); ++pos)
    {
        cout << "key: " << pos->first << " value: " << pos->second << endl;
    }
    system("pause");
    return 0;
}