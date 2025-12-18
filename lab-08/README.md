# OOP Lab 8: Stacks, Copy Constructors, and Friend Functions in C++

## Lab Overview
This laboratory focuses on implementing stack data structures and exploring advanced class features:
- Basic stack with statically allocated array
- Stack with dynamically allocated array, including copy constructor
- Friend functions for accessing private members
- Passing objects by value, reference, and address, demonstrating behavior (e.g., copying, modification)

The program includes two subtasks: a simple static stack and an advanced dynamic stack with friend functions to pop all elements in different passing modes.

## Requirements (as given in the lab)
1. Stack with statically allocated array (fixed size 5)  
   - Push and pop operations  
   - Handle full/empty conditions  

2. Stack with dynamically allocated array  
   - Include copy constructor  
   - Friend functions that take Stack: by value, by reference, by address  
   - Each friend function pops all data from the stack  

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Static stack: fixed array, push/pop
└── subtask2.cpp      # Dynamic stack: alloc array, copy ctor, friend pops (value/ref/addr)
```

## Key Implementations & Notes

### Subtask 1: Static Stack
- Class `Stack` with private: `int tos`, `int size=5`, `int arr[5]`
- Default constructor initializes tos to -1
- Destructor for tracing
- `push(int x)`: increments tos if not full
- `pop(int& x)`: decrements tos if not empty, returns success flag
- Demo: push 6 elements (overflow on last), pop 6 (underflow on last)

### Subtask 2: Dynamic Stack with Friends
- Class `Stack` with private: `int tos`, `int size`, `int* arr`
- Constructors: default (size 5), parameterized (user size), copy (deep copy array)
- Destructor deallocates array
- `push(int x)` and `pop(int& x)` similar to subtask1
- `popStack()`: pops all elements (private, used by friends)
- Friend functions:  
  - `pop_fun(Stack s)`: by value (copies stack, pops copy)  
  - `pop_funs(Stack& s)`: by ref (pops original)  
  - `pop_fun(Stack* s)`: by addr (pops original via ->)  
- Demo: user inputs size, pushes size+1 elements, calls friends in sequence (with repush)

> Note: Tracing with "CTOR", "Copy CTOR", "DTOR" shows lifecycle. By-value friend triggers copy ctor and dtor.

## Sample Outputs

**Subtask 1:**
```
Default COTR
Stack is FUll  # on 6th push
5
4
3
2
1
Stack is empty
DTOR
```

**Subtask 2 (size=3):**
```
Enter Stack size: 3
Parameterized COTR
Stack is FUll  # on 4th push

Friend Func by value
Copy COTR
3
2
1
DTOR  # copy destroyed

Friend Func by address
3
2
1

Stack is FUll  # after repush

Friend Func by refrence
3
2
1
DTOR  # original destroyed
```

## Learning Outcomes
- Implementing LIFO stack with array backing
- Static vs dynamic allocation tradeoffs
- Copy constructors for deep copying dynamic resources
- Friend functions for privileged access
- Object passing semantics: value (copy), ref (alias), addr (pointer)
- Resource management with destructors

Essential for understanding data structures and class interactions! 🚀