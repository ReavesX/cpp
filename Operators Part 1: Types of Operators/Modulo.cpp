#include <iostream>
#include <cmath>
using namespace std;

/*


Write a code that initializes three variables, a (int), b (double) and c (int) with the values 9, 2.6, and 11 (respectively).

After that, initialize the following variables:

d (int) that will hold the result of a modulo 2 
e (int) that will hold the result of a modulo 3
f (double) that will hold the result of b modulo 1.5
g (double) that will hold the result of b modulo 3.9
h (int) that will hold the result of c modulo 10



*/



int main() {
    // Type your code below
    int a = 9;
    double b = 2.6;
    int c = 11;

    int d = a % 2; // Modulo operation for int
    int e = a % 3; 
    double f = fmod(b, 1.5); // Modulo operation for double
    double g = fmod(b, 3.9); /
    int h = c % 10; 

    
    // Don't change the line below
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;
    std::cout << "h = " << h << std::endl;
    return 0;
}