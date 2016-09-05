#include <iostream>
#include <set>
#include <stdlib.h>

int main()
{
    typedef std::set<int> IntSet;

    IntSet coll;
    
    //Insert elements from 1 to 6 in arbitray order.
    //Value 1 gets inserted twice.
    coll.insert(3);
    coll.insert(1);
    coll.insert(5);
    coll.insert(4);
    coll.insert(1);
    coll.insert(6);
    coll.insert(2);

    IntSet::const_iterator pos;     //迭代器
    for(pos = coll.begin(); pos != coll.end(); ++pos)
    {
        std::cout << *pos << " ";
    }
    std::cout << std::endl;
    system("pause");
    return 0;

}

/*
* The output of the program is as follows:
* 1 2 3 4 5 6
*/