# OOP Lab 12: Operator Overloading and Static Members in C++

## Lab Overview
This final laboratory emphasizes operator overloading for custom classes and the use of static members:
- Overloading arithmetic, comparison, increment, and cast operators for a Fraction class
- Static counter in Stack class to track instances
- Friend operator<< for output and + for concatenation in Stack

The program consists of two subtasks: a comprehensive Fraction class and an enhanced Stack with statics and operators.

## Requirements (as given in the lab)
- Fraction class: num, den; simplify, operators: + (frac+frac, frac+int, int+frac), - (similar), * (similar), / (similar), = (assignment), ==, !=, <, >, ++ (pre/post), float cast  
- Stack: + for concatenation, << for printing, static counter  
- Demo operations and counter  

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Fraction class with operator overloading and demo
└── subtask2.cpp      # Stack class with static counter, + operator, << friend, and demo
```

## Key Implementations & Notes

### Subtask 1: Fraction Class
- Private: int num, den; helper gcd/lcm for simplify
- Constructors: default (0/1), single int (num/1), two ints
- Overloaded operators:
  - Arithmetic: +,-,*,/ (frac with frac/int, handles signs)
  - Assignment: = (simplifies)
  - Comparison: ==,!=,<,>
  - Increment: ++ (pre: adds 1, post: returns old)
  - Cast: explicit to float (num/den)
- `print()` and `simplify()` methods
- Demo: inputs two fractions, performs all operations, casts to float

### Subtask 2: Stack Class
- Private: int tos, size, *arr; static int counter (instance count)
- Constructors: default (5), parameterized, copy (deep)
- Destructor deallocates arr, decrements counter
- Push/pop with bounds
- Static `getCounter()` to access count
- Operator +: concatenates two stacks into new (pushes elements)
- Friend ostream& <<: prints stack as [1, 2, 3]
- Demo: creates stacks, pushes, concatenates, prints counter and result

## Sample Outputs

**Subtask 1 (Fraction Demo, e.g., f1=1/2, f2=3/4):**
```
f1+f2=5/4
f1-f2=-1/4
f1*f2=3/8
f1/f2=2/3

f1+5=11/2
5+f1=11/2
...

f1 == f2 ? false
f1 != f2 ? true
f1 < f2 ? true
f1 > f2 ? false

++f1=3/2

F2++=3/4  # then f2 becomes 7/4

ff=3/2 = 1.5
```

**Subtask 2 (Stack Demo):**
```
Parameterized COTR
Parameterized COTR
2  # counter

[1, 10, 2, 20, 3]  # a + b
```

## Learning Outcomes
- Operator overloading for intuitive custom type usage
- Handling multiple overloads (member vs non-member)
- Static members for class-wide data (e.g., counters)
- Friend functions for operator<<
- Deep copying in operators involving dynamic resources
- Fraction math with simplification and edge cases

Culminating OOP concepts with practical overloading! 🚀