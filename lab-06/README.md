# OOP Lab 6: Dynamic Memory Allocation and Introduction to Classes in C++

## Lab Overview
This laboratory explores dynamic memory management and the basics of object-oriented programming:
- Dynamic allocation for 1D and 2D arrays using `new` and `delete`
- Implementing an interactive line editor for text manipulation
- Defining a simple class with private members, getters, setters, and methods

The program consists of 4 subtasks, each highlighting memory handling or class concepts.

## Requirements (as given in the lab)
1. Dynamic two-dimensional array of integers  
2. Dynamic array (one-dimensional)  
3. Line editor (50 characters) – interactive text input with navigation and editing  
4. Employee class with:  
   - Members: id, name, age, salary  
   - Getters and setters  
   - Print method as class member  
   - Standalone print function  

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Dynamic 2D array: allocate, input, print, deallocate
├── subtask2.cpp      # Dynamic 1D array: allocate, input, print, deallocate
├── subtask3.cpp      # Interactive line editor (cursor nav, insert, delete, case toggle)
└── subtask4.cpp      # Employee class with getters/setters, member print, standalone print
```

## Key Implementations & Notes

### Subtask 1: Dynamic 2D Array
- Allocates a 2x2 integer matrix using `new int*[SIZE]` and nested `new int[SIZE]`
- Input and print using nested loops
- Proper deallocation with loop for rows and then the array of pointers

### Subtask 2: Dynamic 1D Array
- Allocates size 5 integer array with `new int[SIZE]`
- Input using pointer arithmetic, output with array notation
- Deallocates with `delete []ptr`

### Subtask 3: Line Editor
- Dynamic char array (user-specified size `n`)
- Interactive editing: arrow keys for movement (left/right/up/down for case toggle), backspace/delete, insert characters
- Handles boundaries (beeps on invalid moves), shifts characters on insert/delete
- Uses console functions like `gotoxy()`, `getch()` (Windows-specific)
- Case toggle: up/down arrows convert to upper/lower case

### Subtask 4: Employee Class
- Class `employee` with private members: int id, char name[20], int age, float salary
- Public getters and setters (using `this->` for clarity)
- Member `print()` method to display details
- Standalone `print_emp(employee emp)` function (pass by value)
- Input using `cin` and `cin.getline` for name
- Demonstrates encapsulation basics

## Sample Outputs

**Subtask 1 (2D Array):**
```
enter cell of row 1 col 1: 10
enter cell of row 1 col 2: 20
enter cell of row 2 col 1: 30
enter cell of row 2 col 2: 40

10 20 
30 40 
```

**Subtask 2 (1D Array):**
```
enter element #1: 5
enter element #2: 10
...
5 10 15 20 25 
```

**Subtask 4 (Employee):**
```
Enter employee Id: 101
Enter employee Name: John Doe
Enter employee Age: 35
Enter employee Salary: 50000

Employee Id: 101
Employee Name: John Doe
Employee Age: 35
Employee Salary: 50000

Employee Id: 101
Employee Name: John Doe
Employee Age: 35
Employee Salary: 50000
```

**Subtask 3 (Line Editor):**
- Interactive console: Type characters, navigate with arrows, toggle case, insert/delete – outputs edited line on exit

## Learning Outcomes
- Dynamic memory allocation/deallocation for arrays (1D/2D)
- Avoiding memory leaks with proper `delete`
- Interactive console programming with keyboard input
- Class design: private data, public interfaces (getters/setters/methods)
- Standalone functions vs member methods

First steps into true OOP with classes and dynamic resources! 🚀