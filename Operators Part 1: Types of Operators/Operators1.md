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

# Modulus Operator

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
