/**/
//This is a program of Exception Handling
//2016.8.24
//This code is modified from the website:http://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm

#include <iostream>
#include <stdlib.h>
using namespace std;

double division(int a ,int b)
{
    if(b == 0){
        throw "Division by zero condition!"; //error because the gcc compiler don't support the Exception.
    }
    return (a/b);
}

int main()
{
    int x = 50;
    int y = 0;
    double z = 0;

    try{
        z = division(x,y);
        cout<<z<<endl;
    }catch(const char *msg){   /*why const char*:
                                char *msg  = "Division by zero condition!"; 
                                Creates a pointer to point to a string literal "Division by zero condition!". 
                                This is faster than the array version, but string pointed by the pointer should not be changed, because it is located in an read only implementation defined memory. Modifying such an string literal results in Undefined Behavior.
                                In fact C++03 deprecates use of string literal without the const keyword. So the declaration should be:
                                const char *msg = "Division by zero condition!";                          
                                */
        cerr<<msg<<endl;
    }
    system("pause");
    return 0;
}