# Lesson 3: Loops in C Programming

## Introduction to Loops

Loops are control structures that allow you to execute a block of code repeatedly. They are essential for automating repetitive tasks and processing collections of data. Without loops, programmers would need to write the same code multiple times, making programs longer and harder to maintain.

Remember that programmers are lazy, so we create loops to avoid repeating the same tasks manually.

## The Need for Loops

Consider a program that needs to print numbers from 1 to 10:

```c
#include <stdio.h>

int main() {
    // Without loops (verbose and repetitive)
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    printf("6\n");
    printf("7\n");
    printf("8\n");
    printf("9\n");
    printf("10\n");
    
    return 0;
}
```

With loops, we can accomplish the same task more efficiently:

```c
#include <stdio.h>

int main() {
    // With loops (concise and maintainable)
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}
```

## Types of Loops in C

C provides three main types of loops:
1. `for` loop - best when the number of iterations is known
2. `while` loop - best when the number of iterations is unknown
3. `do-while` loop - similar to while, but guarantees at least one execution

## The For Loop

The `for` loop is ideal when you know exactly how many times you want to repeat a block of code.

### Basic Syntax

```c
for (initialization; condition; update) {
    // Code to repeat
}
```

- **Initialization**: Executed once at the beginning (typically initializes a counter variable)
- **Condition**: Checked before each iteration; loop continues while condition is true
- **Update**: Executed after each iteration (typically increments/decrements the counter)

### Example

```c
// for.c
#include <stdio.h>

int main() {
    // Print numbers 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("Number: %d\n", i);
    }
    
    return 0;
}
```

### Execution Flow

1. Initialize `i = 1`
2. Check if `i <= 5` (true)
3. Execute loop body: print "Number: 1"
4. Update: `i++` (i becomes 2)
5. Check if `i <= 5` (true)
6. Execute loop body: print "Number: 2"
7. ...and so on until i becomes 6
8. Check if `i <= 5` (false)
9. Exit loop

### Variations of For Loops

#### Multiple Initialization or Update Statements

```c
for (int i = 0, j = 10; i < j; i++, j--) {
    printf("i = %d, j = %d\n", i, j);
}
```

#### Omitting Statements

Any of the three components can be omitted (though the semicolons are required):

```c
int i = 0;
for (; i < 5; i++) {  // Initialization omitted
    printf("%d\n", i);
}

for (int i = 0; i < 5;) {  // Update inside the loop
    printf("%d\n", i);
    i++;
}

for (int i = 0;;i++) {  // Infinite loop with exit condition inside
    printf("%d\n", i);
    if (i >= 5) break;
}
```

## The While Loop

The `while` loop is useful when you don't know in advance how many iterations you need.

### Basic Syntax

```c
while (condition) {
    // Code to repeat as long as condition is true
}
```

### Example

```c
// while.c
#include <stdio.h>

int main() {
    int count = 1;
    
    while (count <= 5) {
        printf("Count: %d\n", count);
        count++;
    }
    
    return 0;
}
```

### Execution Flow

1. Check if `count <= 5` (true)
2. Execute loop body: print "Count: 1" and increment count
3. Check if `count <= 5` (true)
4. Execute loop body: print "Count: 2" and increment count
5. ...and so on until count becomes 6
6. Check if `count <= 5` (false)
7. Exit loop

### Usage Scenarios

The `while` loop is particularly useful for:
- Processing user input until a specific value is entered
- File operations until end-of-file is reached
- Iterating through data structures (when combined with pointers)

```c
#include <stdio.h>

int main() {
    int number;
    int sum = 0;
    
    printf("Enter numbers (enter 0 to stop):\n");
    
    scanf("%d", &number);
    while (number != 0) {
        sum += number;
        scanf("%d", &number);
    }
    
    printf("Sum of entered numbers: %d\n", sum);
    
    return 0;
}
```

## The Do-While Loop

The `do-while` loop is similar to the `while` loop, but it guarantees that the loop body executes at least once, as the condition is checked after the first execution.

### Basic Syntax

```c
do {
    // Code to repeat
} while (condition);
```

Note the semicolon at the end, which is required.

### Example

```c
#include <stdio.h>

int main() {
    int count = 1;
    
    do {
        printf("Count: %d\n", count);
        count++;
    } while (count <= 5);
    
    return 0;
}
```

### Execution Flow

1. Execute loop body: print "Count: 1" and increment count
2. Check if `count <= 5` (true)
3. Execute loop body: print "Count: 2" and increment count
4. ...and so on until count becomes 6
5. Check if `count <= 5` (false)
6. Exit loop

### When to Use Do-While

Use the `do-while` loop when:
- You need the loop body to execute at least once
- You need to process user input at least once
- You're validating input and want to repeat until valid input is provided

```c
#include <stdio.h>

int main() {
    int number;
    
    do {
        printf("Enter a positive number: ");
        scanf("%d", &number);
        
        if (number <= 0) {
            printf("Invalid input! Please try again.\n");
        }
    } while (number <= 0);
    
    printf("You entered: %d\n", number);
    
    return 0;
}
```

## Loop Control Statements

C provides three statements to control the flow of loops:

### 1. break

The `break` statement immediately terminates the innermost loop:

```c
for (int i = 1; i <= 10; i++) {
    if (i == 5) {
        break;  // Exit the loop when i equals 5
    }
    printf("%d ", i);  // Prints: 1 2 3 4
}
```

### 2. continue

The `continue` statement skips the rest of the current iteration and jumps to the next one:

```c
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        continue;  // Skip even numbers
    }
    printf("%d ", i);  // Prints: 1 3 5 7 9
}
```

### 3. goto (use sparingly)

The `goto` statement can jump to a labeled statement:

```c
#include <stdio.h>

int main() {
    int i = 1;
    
start:
    if (i <= 5) {
        printf("%d\n", i);
        i++;
        goto start;
    }
    
    return 0;
}
```

Note: Using `goto` is generally discouraged as it can make code difficult to understand and maintain. Structured loops are almost always a better choice.

## Nested Loops

Loops can be placed inside other loops, creating nested loops. These are useful for working with multi-dimensional data or when you need to perform operations with multiple counters.

### Example: Multiplication Table

```c
#include <stdio.h>

int main() {
    // Print a 5x5 multiplication table
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%3d", i * j);  // %3d ensures each number takes up 3 spaces
        }
        printf("\n");  // Move to next line after each row
    }
    
    return 0;
}
```

Output:
```
  1  2  3  4  5
  2  4  6  8 10
  3  6  9 12 15
  4  8 12 16 20
  5 10 15 20 25
```

### Breaking Out of Nested Loops

The `break` statement only exits the innermost loop. To exit multiple nested loops, you can use a flag variable or `goto`:

```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool done = false;
    
    // Using a flag variable
    for (int i = 0; i < 10 && !done; i++) {
        for (int j = 0; j < 10; j++) {
            if (i * j > 50) {
                printf("First product > 50: %d * %d = %d\n", i, j, i * j);
                done = true;
                break;
            }
        }
    }
    
    return 0;
}
```

## Infinite Loops

An infinite loop is a loop that continues indefinitely because its termination condition is never met. Sometimes infinite loops are intentional (e.g., in operating systems), but often they are programming errors.

### Creating Intentional Infinite Loops

```c
// Using for
for (;;) {
    // Code inside an infinite loop
    // Must have an exit condition inside using break
}

// Using while
while (1) {  // or while(true) with <stdbool.h>
    // Code inside an infinite loop
    // Must have an exit condition inside using break
}
```

### Example: Menu System

```c
#include <stdio.h>

int main() {
    int choice;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Option One\n");
        printf("2. Option Two\n");
        printf("3. Option Three\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("You selected Option One\n");
                break;
            case 2:
                printf("You selected Option Two\n");
                break;
            case 3:
                printf("You selected Option Three\n");
                break;
            case 4:
                printf("Exiting program\n");
                return 0;  // Exit the program
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    
    return 0;
}
```

## Common Loop Patterns

### 1. Accumulation Pattern

```c
int sum = 0;
for (int i = 1; i <= 100; i++) {
    sum += i;  // Accumulate sum of 1 to 100
}
printf("Sum: %d\n", sum);
```

### 2. Searching Pattern

```c
int arr[] = {12, 45, 7, 23, 56, 89, 11};
int size = sizeof(arr) / sizeof(arr[0]);
int target = 23;
int index = -1;  // -1 indicates not found

for (int i = 0; i < size; i++) {
    if (arr[i] == target) {
        index = i;
        break;  // Exit loop when found
    }
}

if (index != -1) {
    printf("Found %d at index %d\n", target, index);
} else {
    printf("%d not found in the array\n", target);
}
```

### 3. Counting Pattern

```c
int arr[] = {12, 45, 7, 23, 56, 89, 11};
int size = sizeof(arr) / sizeof(arr[0]);
int count = 0;

for (int i = 0; i < size; i++) {
    if (arr[i] > 20) {
        count++;  // Count elements greater than 20
    }
}

printf("Number of elements greater than 20: %d\n", count);
```

## Exercise: Fibonacci Sequence

The Fibonacci sequence is a series of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1.

Write a program that:
1. Asks the user for a number n
2. Prints the first n Fibonacci numbers
3. Implements the solution using all three types of loops (for, while, and do-while)

**Exercise Template :** `fibonacci.c`

### Hints
- The first two Fibonacci numbers are 0 and 1
- Each subsequent number is the sum of the two previous numbers
- For n=1, print just "0"
- For n=2, print "0, 1"
- For n≥3, print "0, 1, 1, 2, 3, 5, ..." up to the nth term

### Submission Instructions
1. Compile your code: `gcc fibonacci.c -o out/fibonacci`
2. Test your program with various inputs
3. Submit your solution according to the course guidelines

## Key Takeaways

- Loops allow you to execute a block of code repeatedly, making your code more concise and maintainable
- The three main types of loops in C are:
  - `for` loop - best when the number of iterations is known
  - `while` loop - best when the number of iterations depends on a condition
  - `do-while` loop - guarantees at least one execution before checking the condition
- Loop control statements (`break`, `continue`) allow you to alter the normal flow of loops
- Nested loops can be used for multi-dimensional operations or when multiple counters are needed
- Infinite loops can be created intentionally but must include exit conditions
- Common loop patterns include accumulation, searching, and counting

## Additional Resources

- [C Programming Loops on Programiz](https://www.programiz.com/c-programming/c-for-loop)
- [Interactive Fibonacci Sequence Visualizer](https://www.mathsisfun.com/numbers/fibonacci-sequence.html)
- [Performance Considerations for Different Loop Types](https://www.geeksforgeeks.org/loops-in-c-and-cpp/)