#include <iostream>

using namespace std;

int main()
{
// Declaration of variables
    int a = 0;
    int b = 2;
    int sum = a + b;

    cout << "The value of variable sum is: " << sum << endl;

    a = 3;

    sum = a + b;

    cout << "The value of variable sum is: " << sum << endl;

    cin.ignore();
    return 0;
}
