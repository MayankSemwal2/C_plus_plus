#include <iostream>
using namespace std;
//8.3 v1

int main()
{
    int a = 10;

    int *p;

    int **q;

    p = &a;

    q = &p;

    cout << *p;

    cout << **q;
    return 0;
}
