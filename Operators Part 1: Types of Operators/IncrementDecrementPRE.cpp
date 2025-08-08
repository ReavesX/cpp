#include <iostream>


/*




You are given a code with initializations of x, y, and z. (Don't delete these lines!)

Your task is to use the increment/decrement operators to perform the following operations, in this order:

Use the postfix increment operator to assign the current value of x to a and then increment x.
Use the prefix decrement operator to decrement y and assign its new value to b.
Use the postfix decrement operator to assign the current value of z to c and then decrement z.






*/
int main() {
    int x = 10;
    int y = 20;
    int z = 30;
    
    int a, b, c;
    
    // Type your code below
    
    a = x++;
    b = --y;
    c = z--;


    
    // Don't change the lines below
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;
    std::cout << "z: " << z << std::endl;
    
    return 0;
}