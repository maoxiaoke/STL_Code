#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    unsigned u = 10, u2 = 42; //unsigned is the same as unsigned int
    cout << u2 -u << endl;
    cout << u - u2 << endl;

    int i = 10, i2 = 42;
    cout << i2 - i << endl;
    cout << i - i2 << endl;
    cout << i - u2 << endl;
    cout << u -i << endl;
    int a = sizeof(int);
    cout << a << endl;
    system("pause");
    return 0;


}