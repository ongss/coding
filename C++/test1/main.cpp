#include <iostream>

using namespace std;

int main()
{
    int q = 1;
    int *ptr = &q;
    int **ptrptr = &ptr;
    cout << *ptrptr;
}

