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
- 