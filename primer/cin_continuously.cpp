#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main (){
    /*
    int sum = 0, value = 0;
    while (std::cin >> value)
    sum += value;
    std::cout << "Sum is" << sum << std::endl;
    */
    
 //   int null = 0, *p = &null;

 //   string word;
  //  getline(cin, word);
  //  cout << word << endl;
  /*
  char p[] = {'C','+','+'};
  char p2[] = "C++";
  decltype (strcmp(p,p2)) value;
  value = strcmp (p,p2);
  cout << value << endl;
*/
    int x = 1, y = 1; int someValue = 1;
    cout << (someValue ? ++x,++y : --x,y--) << endl;
/*    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p) << sizeof(*p) << endl;*/
    system ("pause");
    return 0;
}