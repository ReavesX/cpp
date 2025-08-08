/*

Write a script that initializes 2 variables n1 and n2 with the values 8 and 9 (accordingly).

After that initialize another variable n3 that will hold whether n1 is bigger than n2.

*/

#include <iostream>

int main() {
    // Type your code below

    int n1 = 8;
    int n2 = 9;

    bool n3 = (n1 > n2);

    
    // Don't change the line below
    std::cout << "n1 = " << n1 << ", n2 = " << n2 << ", n3 = " << n3 << std::endl;
    
    return 0;
}