
/*
Variables are containers which hold data, you can manipulate; store; or display information within the program. 

Basically a variable is a memory unit we can access by typing the name of it. 

Each variable has a **unique** name and **value** 


variables can be of different types, such as integers, floating-point numbers, characters, etc.
In C, variables must be declared before they can be used.

example:
var_type var_name = value;

int age = 30;
float temperature = 36.6f; 
char initial = 'A';
*/

#include <iostream>

int main() {
    // Declare and initialize variables here
    
    int quantity = 5;
    // Output the values - Don't change below this line
    std::cout << "Quantity: " << quantity;
    
    return 0;
}