# OOP Lab 9: Recursion, Composition, and Aggregation in C++

## Lab Overview
This laboratory covers two main topics:
- **Recursion**: Implementing classic recursive functions (power and Fibonacci)
- **Object Relationships**: Demonstrating **composition** (has-a with ownership) and **aggregation** (has-a without ownership) using `Point`, `Rectangle`, and `Triangle` classes

The program is divided into subtasks that showcase these concepts clearly, with tracing output to highlight object lifecycle differences.

## Requirements (as given in the lab)
1. Recursive power: `power(x, y) = x * power(x, y-1)` (y > 0), base case 1 when y=0  
2. Recursive Fibonacci: `fib(x) = fib(x-1) + fib(x-2)` (x > 1), base cases fib(0)=0, fib(1)=1  
3. Classes: `Point`, `Rectangle`, `Triangle`  
   - With composition: Rectangle/Triangle own their Points (member objects)  
   - With aggregation: RectangleAgg/TriangleAgg hold pointers to external Points  
   - Demonstrate both relationships and observe lifecycle differences

## Project Structure
```
.
├── main.cpp              # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp          # Recursive power and Fibonacci
├── subtask2.cpp          # Composition test (Rectangle and Triangle own Points)
├── subtask3.cpp          # Aggregation test (RectangleAgg/TriangleAgg use Point pointers)
├── point.cpp             # Point class: constructors, setters/getters, print, destructor
├── rectangle.cpp         # Rectangle (composition) and RectangleAgg (aggregation)
└── triangle.cpp          # Triangle (composition) and TriangleAgg (aggregation)
```

## Key Implementations & Notes

### Subtask 1: Recursion
- `power(int x, int y)`: simple tail recursion
- `fib(int x)`: classic binary recursion (inefficient but educational)
- User input for base/exponent and Fibonacci index

### Composition vs Aggregation

#### Composition (subtask2.cpp)
- `Rectangle` contains two `Point` objects (`ul`, `lr`) as members
- `Triangle` contains three `Point` objects (`head`, `b1`, `b2`) as members
- Points are created when shape is created, destroyed when shape is destroyed
- Strong ownership: shape lifecycle controls points

#### Aggregation (subtask3.cpp)
- `RectangleAgg` and `TriangleAgg` hold pointers to existing `Point` objects
- Points are created externally and passed in
- Shape does not destroy points (no delete in destructor)
- Weak relationship: points can outlive the shape

### Point Class
- Multiple constructors: default, (x,y), single param (x=x, y=x)
- Destructor prints message for tracing
- `print()` shows coordinates

## Sample Outputs

**Subtask 1 (Recursion):**
```
enter a number: 5
enter its power number: 3
5 ^ 3 = 125

enter a number: 8
Fib is: 21
```

**Subtask 2 (Composition):**
```
--- Composition Test ---

 Two parameter CTOR
 Two parameter CTOR
 Rectangle default CTOR? (if any)
 Rectangle points
{0 0}
{10 10}

 Two parameter CTOR
 Two parameter CTOR
 Two parameter CTOR
 Triangle 6 params CTOR
 Triangle points
{1 1}
{3 3}
{6 1}

 Rectangle DTOR
 Point DTOR
 Point DTOR
 Triangle DTOR
 Point DTOR
 Point DTOR
 Point DTOR
```

**Subtask 3 (Aggregation):**
```
--- Aggregation Test ---

 Default CTOR  (or Two parameter)
 Two parameter CTOR
 Two parameter CTOR
 RectangleAgg CTOR
 Aggregation Rectangle Points:
{0 0}
{5 5}

 TriangleAgg CTOR
 Aggregation Triangle Points:
{0 0}
{5 5}
{10 0}

// Only Point DTORs at end of scope — no extra from shapes
```

## Learning Outcomes
- Writing clean recursive functions with proper base cases
- Understanding exponential time in naive Fibonacci
- Composition: "part-of" relationship with automatic lifecycle management
- Aggregation: "has-a" relationship with shared/external objects
- Observing object creation/destruction order via tracing
- Designing classes with meaningful relationships

Excellent demonstration of fundamental OOP design principles! 🚀