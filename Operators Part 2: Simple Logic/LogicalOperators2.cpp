/*

You need to assign integer values to variables b1 and b2 so that b3 evaluates to true in the expression: bool b3 = !((b1 + b2) > (b1 * b2)).

*/


#include <iostream>
using namespace std;

int main() {
    // Type your code below
    int b1 = 3;
    int b2 = 2;
    bool b3 = !((b1 + b2) > (b1 * b2));
    
    // Don't change the line below
    cout << "b3 = " << b3 << endl;
    
    return 0;
}