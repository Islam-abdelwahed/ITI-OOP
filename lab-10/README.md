# OOP Lab 10: Templates and Inheritance in C++

## Lab Overview
This laboratory introduces generic programming with templates and explores inheritance hierarchies:
- Template classes and functions for type-agnostic code (e.g., Stack, Swap)
- Single inheritance with method overriding (age validation in derived classes)
- Multi-level inheritance (chained base classes)
- Multiple inheritance (inheriting from multiple bases)
- Diamond problem discussion (multiple paths to a common base)

The program includes subtasks demonstrating templates and a family of classes for Person/Employee/Student/Instructor with overridden behaviors.

## Requirements (as given in the lab)
- Template-based Stack  
- Template-based Swap  
- Person class: id, name, age; print, setage  
- Emp (derived from Person): salary; print, setage >30  
- Student (derived from Person): grade; print, setage >6  
- Instructor (derived from Emp): print, subject char[]  
- Multi-level inheritance example  
- Multiple inheritance example in C++  
- Diamond problem illustration  

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Template Stack (tested with float)
├── subtask2.cpp      # Template Swap (tested with int)
├── subtask3.cpp      # Testing inheritance: Person, Student, Employee, Instructor
├── subtask4.cpp      # Multi-level inheritance (Y → Z → X → A)
├── subtask5.cpp      # Multiple inheritance (H and K → M)
├── person.cpp        # Base Person class
├── employee.cpp      # Employee derived from Person
└── student.cpp       # Student derived from Person
```

## Key Implementations & Notes

### Subtask 1: Template Stack
- Generic `Stack<t2>` with dynamic array
- Constructors: default (size 5), parameterized, copy (deep copy)
- Push/pop with bounds checking
- `popStack()` to empty the stack
- Tested with `float`; pushes size+1 (overflow), pops size+1 (underflow)

### Subtask 2: Template Swap
- Generic function `Swap<t1>(t1& x, t1& y)` for any type
- Tested with `int` via user input

### Subtask 3: Inheritance Testing
- `Person` base: id, name, age; constructors, setters (age >0), print
- `Student` derived: grade; overrides setAge (>=6)
- `Employee` derived: salary; overrides setAge (>=30)
- `Instructor` (derived from Employee): adds subjects (array/vector?); custom print
- Creates and prints objects, sets grades/salaries

### Subtask 4: Multi-Level Inheritance
- Chain: Y (id) → Z (name) → X (age) → A (salary)
- A has setters and print accessing all inherited protected members

### Subtask 5: Multiple Inheritance
- M inherits from H (a) and K (l)
- Sets and prints members from both bases

> Note: Diamond problem mentioned but not fully implemented; would require virtual inheritance to resolve ambiguity in multiple paths to a common base.

## Sample Outputs

**Subtask 1 (Template Stack, size=3):**
```
Enter Stack size: 3
Parameterized COTR
Stack is FUll  # on 4th push
3
2
1
Stack is empty
DTOR
```

**Subtask 2 (Swap):**
```
Enter first number: 10
Enter second number: 20

a = 20, b = 10
```

**Subtask 3 (Inheritance Excerpt):**
```
ID: 1 | Name: Ali | Age: 20

ID: 2 | Name: Sara | Age: 10 | Grade: 5

ID: 3 | Name: Mohamed | Age: 35 Salary: 8000

ID: 4 | Name: Dr. Ahmed | Age: 45 Salary: 15000 Subjects: Math AI
```

**Subtask 4 (Multi-Level):**
```
ID: 1
Name: islam
Age: 10
Salary: 1000
```

**Subtask 5 (Multiple):**
```
a = 5, l = 5
```

## Learning Outcomes
- Templates for reusable, type-safe code (classes and functions)
- Single inheritance with protected members and overriding (e.g., age validation)
- Multi-level inheritance for hierarchical designs
- Multiple inheritance for combining unrelated behaviors
- Awareness of diamond problem and resolution strategies (virtual bases)
- Polymorphic print via overrides

Deepening OOP with generics and complex hierarchies! 🚀