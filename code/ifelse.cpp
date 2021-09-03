#include <iostream>
using namespace std;

int main()
{
    int user_value;
    cout << "Insert a number\n";
    cin >> user_value;
    cin.ignore();
    if (user_value < 10)
    {
        cout << "The value is less than 10";
    } else {
        cout << "The value is greater than 10";
    }
    
    cin.ignore();
    return 0;
}
