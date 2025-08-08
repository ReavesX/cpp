/*

You are given code. Replace the question marks of the variables bool b1 and bool b2 so that bool b3 holds true.

*/

#include <iostream>

int main() {
    // Type your code below
    bool b1 = true;
    bool b2 = false;
    bool b3 = b1 || b2;
    
    // Don't change the line below
    std::cout << "b3 = " << b3;
    return 0;
}