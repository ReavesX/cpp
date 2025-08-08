/*

You are given a code with initialization of count. (Don't delete this line!)

Your task is to add the following operations, in this order:

Add 4 to count
Multiply count by 2
Subtract 1 from count
Use the arithmetic shortcuts to do so!

*/

#include <iostream>

int main() {
    int count = 0;
    
    // Type your code below
    
    count += 4; 
    count *= 2;
    count -= 1;
    
    // Don\'t change the line below
    std::cout << "count = " << count;
    return 0;
}