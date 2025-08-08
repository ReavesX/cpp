### Operators Part 1:

# Arithmetic Operators:
- Operators are used to perform operations on values. The most basic kind are arithmetic or "math" operators. 


| Operator    | Operation            | Example          |
| ----------- | -------------------- | ---------------  |
|      +      | Addition             |    3 + 2 = 5     |
|      -      | Subtraction          |    3 - 2 = 1     |
|      *      | Multiplication       |    3 * 2 = 6     |
|      /      | Division             |    4 / 2 = 2     |  


- For exammple: 
```

int a = 3;
int b = 5;
int c = a + b; // c holds 8

```

- When Working with doubles, The operators work the same as they do with integers. 
```

double x = 3.3;
double y = 4.1;
double z = x + y; // z holds 7.4

```

# Modulus Operator:

- The modulus operator `%` returns the remiander of a division. 
``` 
result = dividend % divisor
```
- where:
     - dividend: The number being divided.
     - divisor: The number that divides the dividend.
     - result: The remainder of the division.

- For example:
```
result = 10 % 3 ; // stores a result of 1
```

- If a number is even, dividing it by 2 will leave a remainder of 0.
- If a number is odd, dividing it by 2 will leave a remainder of 1.


- For floating point numbers like `floats` or `doubles` you cant directly use the `%` operator. Instead you need to use a method from the `<cmath>` library. It works similarly to the modulo operator but keeps the decimal precision. 

- For example: 

```
#include <cmath>

double result = fmod(5.2, 2.0);
// result is 1.2
```

# Increment and Decrement:

- Increment and Decrement operators are used to decrease or increase a variable by 1.
- The increment operator is represented by `++` and the decrement operator is represented by `--`
- For example:
```

int count = 5;
count++; // count is now 6

```

- To decrement you would do the following.
```

int value = 10;
count--; // count is now 9

```

# Post Increment and Decrement:
- Now that weve covered increment and decrement as they are traditionally used we need to discuss using them as a prefix. 
     - The previous way they were used is as a postfix (written after the variable).
     - You may also write them as a prefix where they are written before the variable. There are a few key differences.

- Prefix form: Increments/decrements the variable and then returns the new value.
- Postfix form: Returns the current value of the variable and then increments/decrements it.

- For Example:

```
int x = 5;
int y = x--;
// y = 5, x = 4 (postfix)

int a = 5;
int b = --a;
// b = 4, a = 4 (prefix)
```
# Shortcuts:
C++ created shortcuts for aritmetic operations. This is extremely similar to python's shortcuts.

The following are shortcuts.

| Operator    |       Shortcut       |
| ----------- | -------------------- |
|      +      | +=                   |
|      -      | -=                   |
|      *      | *=                   |
|      /      | /=                   |
|      %      | %=                   |

# Comparison Operators:

- Comparison operators are used to compare two different operands. Sometimes we need to check if a variable is bigger or smaller than another variable.

| Operator    | Operation            | Example                   |
| ----------- | -------------------- | ---------------           |
|      ==     | Equal                |    1 == 2 returns false   |
|      !=     | Not Equal	       |    1 != 2 returns true    |
|      >      | Greater Than	       |    1 > 2 returns false    |
|      <      | Lower Than	       |    1 < 2 returns true     |  
|      >=     | Greater or Equal	  |    1 >= 2 returns false   |
|      <=     | Lower or Equal	  |    1 <= 2 returns true    | 


- The comparison operator returns true if the comparison is correct or false otherwise.

# String Comparison:

- In C++ comparing strings can be done in multiple ways. `std::string` is a class it has operators to make string comparison intuitive and straightforward. We can use the comparison operators `==, !=, <, >, <=, >=`.

- However, there is another way. you can also use the `compare()` method whic returns 0 if strings are equal; <0 if the first string is smaller; and >0 if its larger. 

- For Example:
```

string str1 = "a";
string str2 = "b";
string str2 = "c";

cout << str2.compare(str1) << endl; 
// Positive (b comes after a)

cout << str2.compare(str3) << endl;
// Negative (b comes before c)

cout << str2.compare(str2) << endl;
// 0 (equal strings)
```