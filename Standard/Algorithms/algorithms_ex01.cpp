#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>

using namespace std;

int main()
{
    vector<int> coll;
    vector<int>::iterator pos;

    coll.push_back(2);
    coll.push_back(5);
    coll.push_back(4);
    coll.push_back(1);
    coll.push_back(6);
    coll.push_back(3);

    pos = min_element (coll.begin(), coll.end());
    cout << "min: " << *pos <<endl;
    pos = max_element (coll.begin(), coll.end());
    cout << "max: " << *pos <<endl;
    
    // sort all elements by fault (the fault sorting criterion  is operator <)
    // the vector contains the elements in this order :1 2 3 4 5 6
    sort (coll.begin(), coll.end());

    //find the first elements with value 3
    pos = find (coll.begin(), coll.end(), 3);
    cout << "find: " << *pos <<endl;

    //reverse the order of the found elements with value 3 and all following elements
    reverse(pos, coll.end());

    for(pos = coll.begin(); pos != coll.end(); ++pos)
    {
        cout << *pos << " ";
    }
    cout << endl;

    system("pause");
    return 0;


}