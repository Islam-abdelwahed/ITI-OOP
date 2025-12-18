# OOP Lab 4: Functions and Modular Programming in C++

## Lab Overview
This laboratory emphasizes **modular programming** through the use of user-defined functions. It covers:
- Function declarations and definitions
- Passing parameters (by value)
- Returning values
- Recursive vs iterative approaches (e.g., Fibonacci)
- String manipulation functions
- Basic menu navigation with console graphics

The program is split into separate subtasks, each implementing a specific function and demonstrating its usage.

## Requirements (as given in the lab)
Highlighted menu-based program with the following functions/subtasks:

1. **Interactive Highlighted Menu**  
   - Main menu: New, Display, Exit  
   - Submenu under "New": Project, File, Back  
   - Arrow key navigation, Enter/Right to select, Esc to exit  
   - Highlight selected item, show selected choice  

2. **Simple Calculator Function**  
   - Function taking two integers and an operator (+, -, *, /)  
   - Perform and display the operation  

3. **Factorial**  
   - Function that computes factorial of a number (iterative)  

4. **Power (X^Y)**  
   - Function to compute base raised to exponent (iterative multiplication)  

5. **String Length**  
   - Function that returns length of a C-style string (manual counting, no strlen)  

6. **String Copy**  
   - Function to copy one string into another (manual, no strcpy)  

7. **Fibonacci**  
   - Function to return the nth Fibonacci number (iterative)  
   - Sequence: 0, 1, 1, 2, 3, 5, 8, 13, ...

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Highlighted console menu with arrow navigation
├── subtask2.cpp      # Calculator using switch and function
├── subtask3.cpp      # Factorial function
├── subtask4.cpp      # Power (X^Y) function
├── subtask5.cpp      # Custom string length function
├── subtask6.cpp      # Custom string copy function
└── subtask7.cpp      # Fibonacci nth term function
```

## Key Implementations & Notes

### Subtask 1: Highlighted Menu
- Uses Windows-specific console functions: `gotoxy()`, `textattr()`, `getch()`, `system("cls")`
- Supports arrow keys, Home, Enter, Right arrow for submenu, Esc to exit
- Visual highlighting with reversed colors

### Subtask 2: Calculator
- Single function `excu(int x, int y, char ope)` handling all operations
- Basic validation via default case

### Subtask 3: Factorial
- Iterative approach (safe for larger inputs than recursion)

### Subtask 4: Power
- Iterative multiplication (avoids `pow()` from `<cmath>`)

### Subtask 5: String Length
- Manual loop until `'\0'`
- Uses `cin.getline()` for safe input

### Subtask 6: String Copy
- Manual character-by-character copy
- Properly null-terminates destination

### Subtask 7: Fibonacci
- Iterative method using three variables
- Handles base cases (0 and 1)

## Sample Outputs

**Subtask 4 (Power):**
```
enter the first number: 5
enter the second number: 3
5 ^ 3 = 125
```

**Subtask 5 (Length):**
```
enter a text: Hello World
Length is: 11
```

**Subtask 7 (Fibonacci):**
```
enter a number: 8
fib is: 21
```

**Subtask 1 (Menu):**
- Visual highlighted menu with smooth arrow navigation and submenu support

## Learning Outcomes
- Designing and using reusable functions
- Separation of concerns (each subtask in its own function)
- Parameter passing and return values
- Manual string handling without standard library functions
- Basic console UI with keyboard navigation
- Iterative solutions for mathematical problems

Strong step toward structured and modular code—preparing for classes and objects! 🚀