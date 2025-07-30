#include <iostream>

/*

Write a C++ program that demonstrates type casting. Perform the following operations:

Declare a double variable named price and initialize it with the value 99.99.
Cast the price variable to an int and store the result in a new variable named intPrice.
Print the values of price and intPrice, to the console.

*/


int main() {
    // Declare and initialize variables
    double price = 99.99d;
    int intPrice = (int) price; // manual type cast.
    
    
    // Output the values
    std::cout << "Price: " << price << std::endl;
    std::cout << "Int Price: " << intPrice << std::endl;
    
    return 0;
}