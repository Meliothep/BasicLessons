# Resources

## Syntaxes

### Basic Program Structure
```c
#include <stdio.h>  // Include libraries

int main() {        // Program entry point
    // Code goes here
    return 0;       // Return status
}
```

### Comments
```c
// Single line comment

/* 
   Multi-line comment
   spanning several lines
*/
```

### Variable Declaration
```c
data_type variable_name = initial_value;
int count = 0;               // Integer
char grade = 'A';            // Character
float price = 19.99;         // Floating-point
```

### Function Declaration
```c
return_type function_name(parameters) {
    // Function body
    return value;  // If non-void return type
}
```

## Types

| Data Type       | Description      | Format Specifier | Size (typical) | Range (typical) |
|----------------|------------------|-----------------|----------------|-----------------|
| `char`         | Character        | %c              | 1 byte         | -128 to 127 or 0 to 255 |
| `int`          | Integer          | %d, %i          | 4 bytes        | -2,147,483,648 to 2,147,483,647 |
| `short`        | Small integer    | %hd             | 2 bytes        | -32,768 to 32,767 |
| `long`         | Large integer    | %ld             | 8 bytes        | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 |
| `float`        | Decimal (single) | %f              | 4 bytes        | 1.2E-38 to 3.4E+38 (6-7 digits precision) |
| `double`       | Decimal (double) | %lf             | 8 bytes        | 2.3E-308 to 1.7E+308 (15-16 digits precision) |
| `long double`  | Extended decimal | %Lf             | 16 bytes       | 3.4E-4932 to 1.1E+4932 |
| `bool`         | Boolean (0 or 1) | %d              | 1 byte         | 0 (false) or 1 (true) |
| `void`         | No type          | N/A             | N/A            | N/A |

### Type Modifiers

| Modifier     | Effect                                      | Example               |
|-------------|--------------------------------------------|----------------------|
| `signed`    | Allows negative values (default for most)   | `signed int x = -10;` |
| `unsigned`  | No negative values, doubles positive range  | `unsigned int y = 65535;` |
| `short`     | Smaller size, reduced range                 | `short int count = 100;` |
| `long`      | Larger size, extended range                 | `long int population = 8000000;` |

### Type Conversion

#### Implicit Conversion
```c
int x = 10;
float y = x;    // int implicitly converted to float
```

#### Explicit Conversion (Casting)
```c
float x = 10.5;
int y = (int)x;  // Explicitly convert float to int, y = 10
```

## Operators

### Arithmetic Operators
| Operator | Description               | Example        |
|----------|---------------------------|---------------|
| `+`      | Addition                  | `a + b`       |
| `-`      | Subtraction               | `a - b`       |
| `*`      | Multiplication            | `a * b`       |
| `/`      | Division                  | `a / b`       |
| `%`      | Modulus (remainder)       | `a % b`       |
| `++`     | Increment                 | `a++` or `++a` |
| `--`     | Decrement                 | `a--` or `--a` |

### Relational Operators
| Operator | Description               | Example        |
|----------|---------------------------|---------------|
| `==`     | Equal to                  | `a == b`      |
| `!=`     | Not equal to              | `a != b`      |
| `>`      | Greater than              | `a > b`       |
| `<`      | Less than                 | `a < b`       |
| `>=`     | Greater than or equal to  | `a >= b`      |
| `<=`     | Less than or equal to     | `a <= b`      |

### Logical Operators
| Operator | Description               | Example        |
|----------|---------------------------|---------------|
| `&&`     | Logical AND               | `a && b`      |
| `\|\|`   | Logical OR                | `a \|\| b`    |
| `!`      | Logical NOT               | `!a`          |

### Bitwise Operators
| Operator | Description               | Example        |
|----------|---------------------------|---------------|
| `&`      | Bitwise AND               | `a & b`       |
| `\|`     | Bitwise OR                | `a \| b`      |
| `^`      | Bitwise XOR               | `a ^ b`       |
| `~`      | Bitwise NOT               | `~a`          |
| `<<`     | Left shift                | `a << n`      |
| `>>`     | Right shift               | `a >> n`      |

### Assignment Operators
| Operator | Description               | Example        | Equivalent to |
|----------|---------------------------|---------------|--------------|
| `=`      | Assign                    | `a = b`       | `a = b`      |
| `+=`     | Add and assign            | `a += b`      | `a = a + b`  |
| `-=`     | Subtract and assign       | `a -= b`      | `a = a - b`  |
| `*=`     | Multiply and assign       | `a *= b`      | `a = a * b`  |
| `/=`     | Divide and assign         | `a /= b`      | `a = a / b`  |
| `%=`     | Modulus and assign        | `a %= b`      | `a = a % b`  |
| `&=`     | Bitwise AND and assign    | `a &= b`      | `a = a & b`  |
| `\|=`    | Bitwise OR and assign     | `a \|= b`     | `a = a \| b` |
| `^=`     | Bitwise XOR and assign    | `a ^= b`      | `a = a ^ b`  |
| `<<=`    | Left shift and assign     | `a <<= n`     | `a = a << n` |
| `>>=`    | Right shift and assign    | `a >>= n`     | `a = a >> n` |

### Other Operators
| Operator | Description               | Example                |
|----------|---------------------------|------------------------|
| `sizeof` | Size of variable/type     | `sizeof(int)`         |
| `&`      | Address of variable       | `&a`                  |
| `*`      | Pointer to a variable     | `*ptr`                |
| `?:`     | Ternary operator          | `condition ? x : y`   |

## Conditionals

### If Statement
```c
if (condition) {
    // Code executed if condition is true
}
```

### If-Else Statement
```c
if (condition) {
    // Code executed if condition is true
} else {
    // Code executed if condition is false
}
```

### If-Else If-Else Statement
```c
if (condition1) {
    // Code executed if condition1 is true
} else if (condition2) {
    // Code executed if condition2 is true
} else {
    // Code executed if all conditions are false
}
```

### Switch Statement
```c
switch (expression) {
    case value1:
        // Code for value1
        break;
    case value2:
        // Code for value2
        break;
    default:
        // Default code
}
```

### Ternary Operator
```c
result = (condition) ? value_if_true : value_if_false;
```

## Loops

### For Loop
```c
for (initialization; condition; update) {
    // Code to repeat
}
```

Example:
```c
for (int i = 0; i < 10; i++) {
    printf("%d ", i);  // Prints 0 to 9
}
```

### While Loop
```c
while (condition) {
    // Code to repeat as long as condition is true
}
```

Example:
```c
int i = 0;
while (i < 10) {
    printf("%d ", i);  // Prints 0 to 9
    i++;
}
```

### Do-While Loop
```c
do {
    // Code to repeat at least once
} while (condition);
```

Example:
```c
int i = 0;
do {
    printf("%d ", i);  // Prints 0 to 9
    i++;
} while (i < 10);
```

### Loop Control Statements
| Statement   | Description                                   |
|------------|-----------------------------------------------|
| `break`     | Exits the current loop or switch statement    |
| `continue`  | Skips the rest of the loop and starts next iteration |
| `goto`      | Jumps to a labeled statement (use sparingly)  |

## Memory

### Variables and Memory
- Each variable is stored in memory at a specific address
- The amount of memory used depends on the data type
- Variables are stored in the stack (automatic) or heap (dynamic)

### Pointers
Pointers are variables that store memory addresses.

```c
int x = 10;       // Regular variable
int *ptr = &x;    // Pointer variable holding address of x
printf("%d", *ptr); // Dereference to get value (prints 10)
```

### Memory Allocation
```c
#include <stdlib.h>

// Allocate memory for an integer
int *ptr = (int*) malloc(sizeof(int));
*ptr = 10;  // Store value

// Allocate memory for an array of 10 integers
int *arr = (int*) malloc(10 * sizeof(int));

// Always free memory when done
free(ptr);
free(arr);
```

### Memory Management Functions
| Function   | Description                                  | Header    |
|-----------|----------------------------------------------|-----------|
| `malloc`   | Allocates specified bytes of memory         | stdlib.h  |
| `calloc`   | Allocates and initializes memory to zero    | stdlib.h  |
| `realloc`  | Resizes previously allocated memory         | stdlib.h  |
| `free`     | Releases previously allocated memory        | stdlib.h  |

### Arrays and Memory
```c
int arr[5];            // Static array (stack)
int *dynamic = (int*)malloc(5 * sizeof(int));  // Dynamic array (heap)

// Access elements
arr[0] = 10;
dynamic[0] = 10;  // Same as *(dynamic + 0) = 10;

// When done with dynamic array
free(dynamic);
```

### Memory Layout
| Segment  | Description                                |
|----------|-------------------------------------------|
| Stack    | Contains function call info and local variables |
| Heap     | Dynamic memory allocation (malloc, calloc) |
| Data     | Global and static variables               |
| Text     | Program instructions (code)               |

## Input/Output

### Standard Input/Output
```c
#include <stdio.h>

// Output
printf("Hello, %s! You are %d years old.\n", name, age);

// Input
int number;
scanf("%d", &number);  // Read an integer

char name[50];
scanf("%s", name);     // Read a string (no spaces)
gets(name);            // Read a line (including spaces, deprecated)
fgets(name, 50, stdin); // Read a line safely
```

### File Input/Output
```c
#include <stdio.h>

// Open a file for writing
FILE *file = fopen("data.txt", "w");
if (file != NULL) {
    fprintf(file, "Hello, world!\n");
    fclose(file);
}

// Open a file for reading
file = fopen("data.txt", "r");
if (file != NULL) {
    char buffer[100];
    while (fgets(buffer, 100, file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
}
```

## Functions

### Function Declaration and Definition
```c
// Declaration (prototype)
return_type function_name(parameter_type parameter_name, ...);

// Definition
return_type function_name(parameter_type parameter_name, ...) {
    // Function body
    return value;  // If non-void return type
}
```

### Function Parameters
```c
// Pass by value
void increment(int x) {
    x++;  // Only modifies local copy
}

// Pass by reference (using pointers)
void increment(int *x) {
    (*x)++;  // Modifies original variable
}
```

### Variable Scope
```c
int global = 10;  // Global variable

void function() {
    int local = 20;  // Local variable
    static int persistent = 30;  // Static local variable
    
    // local exists only inside this function
    // persistent retains value between function calls
    // global is accessible everywhere
}
```

## Pre-processor Directives

| Directive      | Description                               | Example                      |
|---------------|------------------------------------------|------------------------------|
| `#include`     | Includes a file                          | `#include <stdio.h>`         |
| `#define`      | Defines a macro                          | `#define MAX 100`            |
| `#ifdef`       | If defined                               | `#ifdef DEBUG`               |
| `#ifndef`      | If not defined                           | `#ifndef HEADER_H`           |
| `#if`          | If condition                             | `#if VERSION >= 2`           |
| `#else`        | Else condition                           | `#else`                      |
| `#elif`        | Else if condition                        | `#elif VERSION == 1`         |
| `#endif`       | End of conditional                       | `#endif`                     |
| `#pragma`      | Compiler-specific instructions           | `#pragma once`               |