#include <iostream>
using namespace std;

// Declaration of global variables
int global_variable = 4;

int main()
{
    cout << "Value of global_variable: " << global_variable << endl;

// Declaration of local variables
    
    int local_variable = 2;

    cout << "Value of local_variable: " << local_variable << endl;
    
    cin.ignore();
    return 0;
}
