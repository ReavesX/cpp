Variables:


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
double pi = 3.141519265359d;

# doubles and floats

the f after float is essential, called a literal suffix -- it tells the compiler that this IS a float. Floats only have 7 decimals of precision. 

Similarly, doubles are used to store decimal point number, but with double preceision (15-17 digits of precision.)


# Strings and Chars

A **char** is a single character, '%'; 'b', 'z'. A **string** is a sequence of chars, and in order to use them you must do `#include <string>` at the top of your code. Always explicitly include the headers used in your code.


# Namespaces --
To handle your namespace you can do one of two things
### 1:
- `using namespace std;`
### 2:
- `std::string s1 = "This is a string";`
- This only works because we explicitly used std::

Example: 
```strings.cpp
#include <string>
using namespace std;  // Method 1

int main() {
    string s1 = "Hello";  // Method 1 style
    std::string s2 = "Hello again";  // Method 2 style (still works even with 'using namespace')
    return 0;
}
```