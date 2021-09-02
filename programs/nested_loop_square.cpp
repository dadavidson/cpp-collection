#include <iostream>
using namespace std;

int main()
{
    int base, height;
    cout << "Insert the base length: ";
    cin >> base;
    cout << "Insert the height length: ";
    cin >> height;
    cin.ignore();
    cout << endl;

    for(int i = 0; i < height; i = i + 1)
    {
        for(int j = 0; j < base; j = j + 1)
        {
            cout << " *";
        }
        cout << endl;
    }

    cin.ignore();
    return 0;
}