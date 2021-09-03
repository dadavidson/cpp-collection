#include <iostream>
using namespace std;
 
int main () {
   // Local variable declaration:
   int a = 1;

   // do loop execution
   do {
      cout << "value of a: " << a << endl;
      a = a + 1;
   } while( a < 5 );
 
   return 0;
}