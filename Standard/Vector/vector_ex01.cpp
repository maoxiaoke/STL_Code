/* The following code example is taken from the book
 * "The C++ Standard Library - A Tutorial and Reference"
 * by Nicolai M. Josuttis, Addison-Wesley, 1999
 * pages 72-73
 * (C) Copyright Nicolai M. Josuttis 1999.
 * Permission to copy, use, modify, sell and distribute this software
 * is granted provided this copyright notice appears in all copies.
 * This software is provided "as is" without express or implied
 * warranty, and with no claim as to its suitability for any purpose.
 */

#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

int main()
{
    vector<int> coll;    //vector container for integer elements

    //append elements with values 1 to 6
    for (int i=1; i<=6; ++i)
    {
        coll.push_back(i);
    }

    //print all elements 
    for (int i=0; i<coll.size(); ++i)
    {
        cout << coll[i] << " ";
    }
    cout << endl;

    system("pause");

    return 0;
}