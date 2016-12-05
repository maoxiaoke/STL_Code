#include <iostream>
#include <algorithm>
#include <map>
#include <stdlib.h>
using namespace std;

template <typename K, typename V>
class value_equals{
    private:
        V value;
    public:
        value_equals (const V& v):value(v){}
        bool operator() (pair<const K, V> elem){
            return elem.second == value;
        }
};
int main()
{
    typedef map<float, float> FloatFloatMap;
    FloatFloatMap coll;
    FloatFloatMap::iterator pos;

    coll[1] = 7;
    coll[2] = 4;
    coll[3] = 2;
    coll[4] = 3;
    coll[5] = 6;
    coll[6] = 1;  
    coll[7] = 3;

    //search an element with key 3.0
    pos = coll.find (3.0);          //logarithmic complexity
    if (pos != coll.end()){
        cout << pos->first << ": " << pos->second << endl;
    }  

    //search an element with value 3.0
    pos = find_if (coll.begin(), coll.end(), value_equals<float, float>(3.0)); //linear complexity
    if (pos != coll.end()){
        cout << pos->first << ": " << pos->second << endl;
    }
    system("pause");
}