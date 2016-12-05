#include <iostream>
#include <map>
#include <string>
#include <iomanip>
#include <iterator>
#include <stdlib.h>
using namespace std;

//the following example shows how to use a multimap as a dictionary
int main()
{
    typedef multimap<string,string> StrStrMMap;
    StrStrMMap dict;

    //insert some elements in random order
    dict.insert(make_pair("day","Tag"));
    dict.insert(make_pair("strange","fremd"));
    dict.insert(make_pair("car","Auto"));
    dict.insert(make_pair("smart","elegant"));
    dict.insert(make_pair("trait","Merkmal"));
    dict.insert(make_pair("strange","seltsam"));
    dict.insert(make_pair("smart","raffiniert"));
    dict.insert(make_pair("smart","klug"));
    dict.insert(make_pair("clever","raffinert"));

    //print all elements
    StrStrMMap::iterator pos;
    cout.setf (ios::left, ios::adjustfield);
    cout << ' ' << setw(10) << "english " << "german " << endl;
    cout << setfill('-') << setw(20) << "" << setfill('-') << endl;
    for (pos = dict.begin(); pos!=dict.end(); ++pos)
    {
        cout << ' ' << setw(10) << pos->first.c_str() << pos->second << endl;
    }
    cout << endl;

    //print all values for key "smart"
    string word("smart");
    cout << word << ": " << endl;

    for (pos = dict.lower_bound(word); pos != dict.upper_bound(word); ++pos){
        cout << " " << pos->second << endl;
    }

    word = ("raffiniert");
    cout << word << ": " << endl;
    for (pos = dict.begin(); pos != dict.end(); ++pos){
        if (pos->second == word){
            cout << " " << pos->first << endl;
        }
    }

    system("pause");

}