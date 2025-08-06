### Variables Part 2:

# Type Declarations:
- In C++ once a variable is declared a certain type, for example ``int`` or ``char`` they can only hold that type of data. 
the following would cause errors if the two were to have an attempted reassignment like within the code below:

```
int age = 25;
string str = "lol";

age = "string"; // causes error
str = 69; // causes error 
```

- You are able to reassign variables as long as the data corresponds to their typing. expanding on the code from earlier, you can do the following as long as the variables have been declared
```
age = 69;
str = "nice.";
```
# Naming Conventions:
- Its important to follow a convention for naming variables to keep your code readable and maintainable. Here are some of the C++ naming conventions:
    - Names can contain letters, digits, and underscores
    - Names must begin with a letter or an underscore
    - Names are case-sensitive (myVar and myvar are considered different.)
    - Names cannot be c++ keywords like `float` or `int`, `if`, etc.

- Here are some common readability conventions: 

    - Developers commonly use camelCase for naming variables. `countedPeople`, `totalAmount`, `myFriends` are all examples of properly camelCased variables. 
    - Being descriptive and avoid overly shortened names, for example use `numberOfStudents` instead of `n`.
    avoid using single-letter variable names, except for counters `i`,`j`,`k`. 


# Type Casting:
- type casting allows us to convert a value from one data type to another. for example we can convert integers to doubles (and the other way around.)
- There are two types of casting, implicit and explicit casting. 
- Implicit casting is done like the following:
```
int number = 5;
double decimal = number; // automatic. 
```
- Explicit (or manual) Casting is done like the following:
``` 
double decimal = 9.7;
int number = (int) decimal;
```
or 
```
double price = 19.99d;
int priceRounded = (int) price;
```

# Type Casting Part 2:
- You can convert numbers to strings using the standard namespace
```
int number = 789;
bool isValid = true;
string text1 = to_string(number);
string text2 = isValid ? "true : false;
```
- when you convert doubles like this, it will show 6 decimal places by default. 
- To convert strings to different types you can use something like the `String to Integer`, `String to Double` methods, like the following.

``` 
string numberText = "123";
int num = stoi (numberText);
```
or 
```
string numText = "123.456"
double decimal = stod(numText);
```

- If you try to convert letters to an integer or double an error will be thrown.