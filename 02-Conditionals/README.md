# Lesson 2: Conditionals in C Programming

- [Lesson 2: Conditionals in C Programming](#lesson-2-conditionals-in-c-programming)
  - [Introduction to Conditionals](#introduction-to-conditionals)
  - [Boolean Expressions](#boolean-expressions)
    - [Comparison Operators](#comparison-operators)
    - [Logical Operators](#logical-operators)
    - [The Boolean Type](#the-boolean-type)
  - [If Statements](#if-statements)
    - [Basic Syntax](#basic-syntax)
      - [Example](#example)
    - [If-Else Statements](#if-else-statements)
      - [Example](#example-1)
    - [If-Else If-Else Statements](#if-else-if-else-statements)
      - [Example](#example-2)
  - [The Ternary Operator](#the-ternary-operator)
      - [Example](#example-3)
  - [Switch Statements](#switch-statements)
    - [Basic Syntax](#basic-syntax-1)
      - [Example](#example-4)
    - [Switch Statement Limitations](#switch-statement-limitations)
    - [Multiple Cases with Same Action](#multiple-cases-with-same-action)
  - [Exercise: Temperature Classifier](#exercise-temperature-classifier)
    - [Hints:](#hints)
    - [Submission Instructions:](#submission-instructions)
  - [Key Takeaways](#key-takeaways)
  - [Additional Resources](#additional-resources)


## Introduction to Conditionals

Conditionals are fundamental programming structures that allow your programs to make decisions based on certain conditions. They enable your code to execute different blocks depending on whether specific criteria are met.

## Boolean Expressions

Before diving into conditionals, we need to understand boolean expressions - statements that evaluate to either true or false.

### Comparison Operators

C uses the following operators for comparisons:

| Operator | Description | Example |
|----------|-------------|---------|
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal to | `a >= b` |
| `<=` | Less than or equal to | `a <= b` |

### Logical Operators

To combine multiple conditions, C provides logical operators:

| Operator | Description | Example |
|----------|-------------|---------|
| `&&` | Logical AND | `a > 0 && b > 0` |
| `\|\|` | Logical OR | `a > 0 \|\| b > 0` |
| `!` | Logical NOT | `!(a == b)` |

### The Boolean Type

In modern C, you can use `bool` type from `stdbool.h`:

```c
#include <stdbool.h>

bool isValid = true;
bool isComplete = false;
```

In older C versions, boolean values are represented as integers:
- 0 is considered false
- Any non-zero value is considered true

## If Statements

The simplest form of a conditional is the `if` statement.

### Basic Syntax

```c
if (condition) {
    // Code to execute if condition is true
}
```

#### Example

```c
#include <stdio.h>

int main() {
    int number = 10;
    
    if (number > 0) {
        printf("The number is positive\n");
    }
    
    return 0;
}
```

### If-Else Statements

The `if-else` statement allows you to execute one block of code if a condition is true and another block if it's false.

```c
if (condition) {
    // Code to execute if condition is true
} else {
    // Code to execute if condition is false
}
```

#### Example

```c
#include <stdio.h>

int main() {
    int number = -5;
    
    if (number >= 0) {
        printf("The number is positive or zero\n");
    } else {
        printf("The number is negative\n");
    }
    
    return 0;
}
```

### If-Else If-Else Statements

For checking multiple conditions, we use the `if-else if-else` structure:

```c
if (condition1) {
    // Code to execute if condition1 is true
} else if (condition2) {
    // Code to execute if condition1 is false and condition2 is true
} else {
    // Code to execute if all conditions are false
}
```

#### Example

```c
#include <stdio.h>

int main() {
    int score = 85;
    
    if (score >= 90) {
        printf("Grade: A\n");
    } else if (score >= 80) {
        printf("Grade: B\n");
    } else if (score >= 70) {
        printf("Grade: C\n");
    } else if (score >= 60) {
        printf("Grade: D\n");
    } else {
        printf("Grade: F\n");
    }
    
    return 0;
}
```

## The Ternary Operator

The ternary operator (`? :`) provides a shorthand way to write simple if-else statements:

```c
result = (condition) ? value_if_true : value_if_false;
```

#### Example

```c
#include <stdio.h>

int main() {
    int age = 20;
    char* status = (age >= 18) ? "adult" : "minor";
    
    printf("Status: %s\n", status);
    
    return 0;
}
```

This is equivalent to:

```c
char* status;
if (age >= 18) {
    status = "adult";
} else {
    status = "minor";
}
```

## Switch Statements

The `switch` statement is useful when you need to select one of many code blocks to execute based on the value of a variable or expression.

### Basic Syntax

```c
switch (expression) {
    case value1:
        // Code to execute if expression equals value1
        break;
    case value2:
        // Code to execute if expression equals value2
        break;
    // More cases...
    default:
        // Code to execute if no match is found
        // No break needed for default
}
```

The `break` statement exits the switch block. Without it, execution continues to the next case.

#### Example

```c
#include <stdio.h>

int main() {
    char grade = 'B';
    
    switch (grade) {
        case 'A':
            printf("Excellent!\n");
            break;
        case 'B':
            printf("Good job!\n");
            break;
        case 'C':
            printf("Well done\n");
            break;
        case 'D':
            printf("You passed\n");
            break;
        case 'F':
            printf("Try again\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    
    return 0;
}
```

### Switch Statement Limitations

- The expression must evaluate to an integer type (int, char, etc.)
- You cannot use ranges in case statements
- You cannot use floating-point numbers or strings for cases

### Multiple Cases with Same Action

You can have multiple cases execute the same code:

```c
switch (day) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Weekday\n");
        break;
    case 6:
    case 7:
        printf("Weekend\n");
        break;
    default:
        printf("Invalid day\n");
}
```

## Exercise: Temperature Classifier

Write a program that takes a temperature value and a character ('C' for Celsius or 'F' for Fahrenheit) as input, and then classifies the temperature as follows:

- Freezing: Below 0°C or 32°F
- Cold: 0-10°C or 32-50°F
- Cool: 10-20°C or 50-68°F
- Warm: 20-30°C or 68-86°F
- Hot: Above 30°C or 86°F

Your program should handle both Celsius and Fahrenheit inputs and use at least one if-else statement and one switch statement.

**Exercise Template :** `tempClassifier.c`

### Hints:
- You might need to convert between Celsius and Fahrenheit:
  - C = (F - 32) * 5/9
  - F = C * 9/5 + 32

### Submission Instructions:
1. Compile your code: `gcc temperature_classifier.c -o out/temperature_classifier`
2. Test your program with various inputs
3. Submit your solution according to the course guidelines

## Key Takeaways

- Conditionals allow programs to make decisions based on conditions
- The basic conditional structures in C are:
  - if statement
  - if-else statement
  - if-else if-else statement
  - ternary operator
  - switch statement
- Boolean expressions evaluate to either true (non-zero) or false (zero)
- Use comparison operators (`==`, `!=`, `>`, `<`, `>=`, `<=`) to create conditions
- Logical operators (`&&`, `||`, `!`) combine conditions
- Always use braces `{}` even for single-statement blocks
- Be careful not to confuse the assignment operator (`=`) with the equality operator (`==`)

## Additional Resources

- [C Programming Conditionals on Programiz](https://www.programiz.com/c-programming/c-if-else-statement)
- [Switch Statement in C on GeeksforGeeks](https://www.geeksforgeeks.org/switch-statement-in-c/)