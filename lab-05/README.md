# OOP Lab 5: Pointers and Structures in C++

## Lab Overview
This laboratory introduces pointers and structures in C++:
- Using pointers for swapping values and accessing arrays
- Defining and manipulating structures (structs)
- Pointers to arrays of primitives and structs
- Building a simple CRUD-like menu system for managing employee data using structs and pointers

The program is divided into subtasks demonstrating pointer usage, struct handling, and an interactive menu for employee management.

## Requirements (as given in the lab)
- Swap two integers using pointers  
- Use pointer to an array of integers: receive data and print  
- Use pointer to an array of structs (employee: id, name, age): receive data and print  
- Implement a menu system:  
  - New: Add new employee at a specific array position (with overwrite option)  
  - Display: Print all employees  
  - Delete by ID  
  - Delete by Name  

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Swap two integers using pointers
├── subtask2.cpp      # Pointer to integer array: input and print
├── subtask3.cpp      # Pointer to array of employee structs: store and print
└── subtask4.cpp      # Interactive menu for employee management (new, display, delete by ID/name)
```

## Key Implementations & Notes

### Subtask 1: Swap with Pointers
- Function `swap_nums(int* x, int* y)` swaps values by reference using pointers
- Demonstrates pass-by-pointer for modification

### Subtask 2: Pointer to Integer Array
- Fixed-size array (5 elements)
- Uses pointer arithmetic (`*(ptr+i)`) for input and array notation for output

### Subtask 3: Pointer to Struct Array
- Struct `emp` with id (default -1), name (char[20]), age
- Functions to store and print 3 employees using pointer to array

### Subtask 4: Employee Menu System
- Global struct `emp` array (assumed size, e.g., via macro or variable `si`)
- Functions: display, insert, find by name (using `strcmp`), find by ID
- Interactive menu with keyboard navigation (arrows, Enter)
- Submenu for delete (by ID or name)
- Uses console functions like `textattr`, `system("cls")`, `getch()` (Windows-specific)
- Handles overwrite for new entries and confirms deletions

> Note: Subtask4 assumes additional includes (e.g., `<conio.h>`, `<windows.h>`, `<string.h>`) and macros like `For(s)` (likely `for(int i=0;i<s;i++)`).

## Sample Outputs

**Subtask 1 (Swap):**
```
please enter a number: 10
please enter another number: 20

the first number after swap: 20
the second number after swap: 10
```

**Subtask 3 (Employees):**
```
Please enter employee 1 id: 101
Please enter employee 1 name: Alice
Please enter employee 1 age: 30
... (for 2 more)

Employee 1 id: 101
Employee 1 name: Alice
Employee 1 age: 30
... (for others)
```

**Subtask 4 (Menu Excerpt):**
- Visual menu with highlighted options
- On "New": Prompt for index, ID, name, age; overwrite if occupied
- On "Display": List all valid employees (id != -1)
- On "Delete by ID/Name": Search and set id to -1 if found

## Learning Outcomes
- Pointer basics: declaration, dereferencing, arithmetic
- Structures: definition, arrays of structs, pointers to structs
- Modular functions for data management
- Interactive console applications with menus and user input handling
- Memory access and manipulation via pointers

Bridging procedural code to object-oriented principles with structs! 🚀