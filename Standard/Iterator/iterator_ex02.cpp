#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator> //header: iterator is needed
#include <stdlib.h>
using namespace std;

int main()
{
    vector<string> coll;

    copy (istream_iterator<string>(cin),
            istream_iterator<string>(),
            back_inserter(coll));

    sort (coll.begin(), coll.end());

    unique_copy (coll.begin(), coll.end(),
                    ostream_iterator<string>(cout, " "));
    

    return 0;

}