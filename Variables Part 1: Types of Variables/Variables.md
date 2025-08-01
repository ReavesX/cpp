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
bool loginStatus = false;
bool light_Is_On = true;



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

# Booleans
A boolean only has two possible values -- either **true** or **false**. You assert them using the keyword `bool` followed by the name of the variable.

When using cout to print the value, true evaluates to a 1 and false evaluates to 0. Booleans are essential in conditional logic.

Example:
```
bool variable_true = true;
bool variable_false = false;
```

# Chars

a char is a single character. 
you can initialize one by using the ``char`` keyword. For Example, ``char char1 = 'h';`` You typically enclose them with a single quote, `'{character}`. They work the same as characters for exmaple in a word doc, each punctuation, letter, space, etc is one. 


# Constants

Constants are a special type of variable, once iniitalized they are unable to be changed. for example if you were to declare a constant using `const int` where the value of whatever variable you set was 100, it would be immutable 

for example if you have a max value, you might do the following
``const int maxValue = 100;`` 

trying to change the constant value will be met with an error. 