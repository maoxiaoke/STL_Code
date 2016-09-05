/* The following code example is taken from the book
 * "The C++ Standard Library - A Tutorial and Reference"
 * by Nicolai M. Josuttis, Addison-Wesley, 1999
 * pages 73-74
 * (C) Copyright Nicolai M. Josuttis 1999.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */

#include <iostream>
#include <deque>
#include <stdlib.h>
using namespace std;

int main()
{
    deque<float> coll;

    for (int i=1; i<=6; ++i){
        coll.push_front(i*1.1);         //insert at the front
    }

    for (int i=0; i<coll.size(); ++i)
    {
        cout << coll[i] <<" ";
    }
    cout << endl;
    system("pause");

    return 0;
}
