#include <iostream>
using namespace std;

int main ()
{
    int x = 1;
    int y = 0;
    int *p1, *p2;

    p1 = &x;
    cout << "\np1 = &x is " << p1 << endl;

    p2 = p1;
    cout << "\np2 = p1 is " << p2 << endl;

    y = *p2;
    cout << "\ny = *p2 is " << y << endl;

    *p2 = 5;
    cout << "\n*p2 = 5 is " << *p2 << endl;

    cin.ignore();
    return 0;
}