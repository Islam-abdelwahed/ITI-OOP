# OOP Lab 2: Control Structures, Loops, and Basic Algorithms in C++

## Lab Overview
This laboratory focuses on fundamental programming concepts using control structures in C++:
- Conditional statements (`if-else`)
- Loops (`for`, `while`, `do-while`)
- Basic algorithms (prime check, factorial, power, reverse, binary conversion)
- String processing and simple console graphics

The program consists of 10 independent subtasks, each demonstrating a specific concept. They are designed to run separately (only one is uncommented in `main.cpp` at a time).

## Requirements (as given in the lab)
1. Check if a number is prime or not  
2. Convert degree (0–100) to grade (Excellent, Very Good, Good, Accepted, Fail)  
3. Sum a user-specified number of integers  
4. Count words and characters in a sentence (entered by user)  
5. Compute factorial of a number  
6. Compute X^Y (power)  
7. Reverse a number (e.g., 1237 → 7321)  
8. Convert a decimal number to binary (32-bit)  
9. Simple menu system with options that disable after selection  
10. Print a "Magic Box" (Siamese square / Magic square pattern) of odd size

## Project Structure
```
.
├── main.cpp          # Entry point (includes one subtask at a time)
├── subtask1.cpp      # Prime number check
├── subtask2.cpp      # Grade evaluation
├── subtask3.cpp      # Sum of N numbers
├── subtask4.cpp      # Count words and characters in text
├── subtask5.cpp      # Factorial calculation
├── subtask6.cpp      # Power (X^Y) using pow()
├── subtask7.cpp      # Reverse digits of a number
├── subtask8.cpp      # Decimal to 32-bit binary
├── subtask9.cpp      # Interactive menu with disabling options
└── subtask10.cpp     # Magic Box (odd-sized magic square pattern)
```

## Key Implementations & Notes

### Subtask 1: Prime Check
- Checks divisibility from `x-1` down to 2
- Handles numbers ≤1 correctly

### Subtask 2: Grade System
- Standard Egyptian-style grading scale
- Includes invalid input detection

### Subtask 3: Sum of N Numbers
- Creative ordinal suffix printing (1st, 2nd, 3rd, nth)

### Subtask 4: Word & Character Counter
- Uses `getline()` for full sentence input
- Counts characters (excluding spaces) and words (space-separated)

### Subtask 5: Factorial
- Simple iterative multiplication (note: starts from `n-1`, works for n ≥ 1)

### Subtask 6: Power
- Uses `<cmath>` `pow()` function (commented manual version also provided)

### Subtask 7: Reverse Number
- Classic digit extraction using modulo and division

### Subtask 8: Decimal to Binary
- Prints 32-bit binary representation using bit shifting

### Subtask 9: Menu System
- Uses `getch()` and `system("cls")` for interactive feel
- Options disable after being selected once

### Subtask 10: Magic Box
- Implements the Siamese method for constructing a magic square
- Uses `gotoxy()` for precise console positioning
- Works for any odd size > 2
- Visual output forms a magic square pattern

> To test a specific subtask:  
> Edit `main.cpp` → uncomment the desired `#include "subtaskX.cpp"` → recompile.

**Note:** This project uses Windows-specific headers (`<windows.h>`, `<conio.h>`) for `gotoxy()`, `getch()`, and `system("cls")`. It will work best on Windows. For cross-platform compatibility, these could be replaced with alternatives.

## Sample Outputs

**Subtask 7 (Reverse):**
```
enter a number: 1237
the reverse is: 7321
```

**Subtask 8 (Binary):**
```
enter a number: 1425
00000000000000000000010110010001
```

**Subtask 10 (Magic Box, size 5):**
```
          17          24           1           8          15
          23           5           7          14          16
           4           6          13          20          22
          10          12          19          21           3
          11          18          25           2           9
```

## Learning Outcomes
- Mastery of loops and conditional branching
- Understanding of basic algorithms
- String manipulation and input handling
- Bitwise operations
- Console manipulation and user interaction
- Problem decomposition into subtasks

Great foundational practice for procedural programming before moving to OOP concepts! 🚀