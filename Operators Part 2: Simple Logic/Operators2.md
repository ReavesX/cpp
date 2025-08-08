### Operators 2:

# Logical Operators:
- Logical operators are used to check combinations of comparisons that return true or false.

| Operator|	Meaning	                            |  Example  |
| ------- | ------------------------------------| ----------|
| &&      |	And - true if all operands are true	|   a && b  |
| \|\|    | Or - true if any operand is true    | a \|\| b  |
| !       | Not - true if the operand is false	|   !a      |


- For Example:
```
bool b1 = (5 > 3) && (1 == 1); // holds true
```
- For Example:
```
bool b5 = !(5 > 10 || 5 > 1); // holds false
```

- Logical Operators follow a special table called a truth table, which shows what the combination of logical operators returns

- This is the table for the && Operator:

| a     | b     | a && b |
| ----- | ----- | ------ |
| false | false | false  |
| false | true  | false  |
| true  | false | false  |
| true  | true  | true   |


- This is the table for the || Operator:

| a     | b     | a \|\| b |
| ----- | ----- | -------- |
| false | false | false    |
| false | true  | true     |
| true  | false | true     |
| true  | true  | true     |


- Finally, this is the table for the ! Operator:

| a     | !a    |
| ----- | ----- |
| false | true  |
| true  | false |
