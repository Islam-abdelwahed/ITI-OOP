# OOP Lab 1: Basic C++ Input/Output and Type Conversions

## Lab Overview
This laboratory exercise focuses on fundamental C++ concepts including:
- Basic input/output using `cin` and `cout`
- Type casting between `char` and `int` (ASCII values)
- Case conversion of letters (lowercase ↔ uppercase)
- Simple arithmetic operations on integers

The program is structured into separate subtasks, each demonstrating a specific concept, and combined in a single `main.cpp` file using `#include` directives.

## Requirements (as given in the lab)
1. Convert a character to its ASCII code  
2. Convert an ASCII code to its corresponding character  
3. Convert an integer to its corresponding character (and vice versa)  
4. Perform basic arithmetic operations (addition, subtraction, multiplication, division) on two numbers  
5. Convert a letter from lowercase to uppercase or uppercase to lowercase (using ASCII difference of 32)

## Project Structure
```
.
├── main.cpp          # Main file that includes all subtasks
├── subtask1.cpp      # Char → ASCII
├── subtask2.cpp      # ASCII → Char
├── subtask3.cpp      # Arithmetic operations on two integers
└── subtask4.cpp      # Case conversion (upper ↔ lower)
```

## Code Explanation

### Subtask 1: Character to ASCII
Prompts the user for a character and displays its ASCII value using explicit cast to `int`.

### Subtask 2: ASCII to Character
Takes an integer (ASCII code) and displays the corresponding character using cast to `char`.

### Subtask 3: Arithmetic Operations
Reads two integers and outputs their sum, difference, product, and quotient.

> Note: Integer division is used (`/`), so results are truncated (no floating-point division).

### Subtask 4: Case Conversion
- Reads an unsigned char
- If input is lowercase (`a-z`, ASCII 97–122): converts to uppercase by subtracting 32
- If input is uppercase (`A-Z`, ASCII 65–90): converts to lowercase by adding 32
- Otherwise: displays "invalid char" (only handles letters)

## Sample Output
```
Please enter a character: a
Your char ascii is:97

Please enter an ascii code: 65
Your char is:A

please enter two numbers: 10 3
10+3=13
10-3=7
10*3=30
10/3=3

Please enter a char: B
your char small is: b
```

> Note: All `.cpp` files are included directly in `main.cpp`, so only one compilation command is needed.

## Notes
- This lab uses a non-standard but common educational approach of including `.cpp` files directly (normally we use header files and separate compilation).
- No error handling for division by zero in subtask 3.
- Case conversion only works for English letters (ASCII range).

## Learning Outcomes
- Understanding ASCII encoding
- Explicit type casting in C++
- Basic console I/O
- Simple conditional logic
- Arithmetic operators

Feel free to modify or extend any subtask! 🚀