#include <iostream>
#include <algorithm>
#include <vector>
#include <stdlib.h>
using namespace std;

/*
* for_each() algorithm
*/
void print (int elem)
{
    cout << elem << " ";
}
int main()
{
    vector<int> coll;
    for (int i=1; i<=9; ++i)
    {
        coll.push_back(i);
    }

    for_each (coll.begin(),coll.end(), print);
    cout << endl;

    system("pause");
}