#include <iostream>

/*

Given the following code snippet, your task is to assign boolean values (true or false) to variables b1, b2, and b3 so that b4 evaluates to true.

The variable b4 is calculated using the following logic:

It performs an AND operation (&&) between b1, b2, and the NOT of b3
For b4 to be true, all parts of the AND operation must be true

*/


int main() {
    bool b1 = true;
    bool b2 = true;
    bool b3 = false;
    
    bool b4 = b1 && b2 && (!b3);
    std::cout << "b4 = " << b4;
    return 0;
}