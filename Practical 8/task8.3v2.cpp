#include <iostream>
using namespace std;
//8.3 v2

int main()
{
    int a = 10;

    int *p;

    int **q;

    p = &a;

    q = &p;
    
    **q=98;
    
    cout << *p;

    cout << **q;
    return 0;
}
