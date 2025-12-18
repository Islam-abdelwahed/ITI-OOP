# OOP Lab 7: Constructors, Destructors, and Function Overloading in C++

## Lab Overview
This laboratory dives deeper into object-oriented programming concepts:
- Constructor overloading (default, parameterized)
- Destructors for resource cleanup
- Setters and getters for encapsulation
- Function overloading (by value, pointer, reference)
- Tracing object lifecycle (creation/destruction)

The program features two classes: `Complex` for handling complex numbers and `Employee` for managing employee data, demonstrating these features.

## Requirements (as given in the lab)
- **Complex class**:  
  - Constructors: default, single param (real), two params (real, imaginary)  
  - Setters: real, imaginary  
  - Getters: real, imaginary  
  - Print method  

- **Employee class**:  
  - Constructors: default, (id, name), (id, name, age), (id, name, age, salary)  
  - Destructor  
  - Setters and getters for all members  
  - Print method  
  - Functions: myFun(emp) [by value], myFun(emp*) [by pointer], myFun(emp&) [by reference] – all print employee  
  - Trace object creation/destruction  
  - Swap by reference (not implemented in provided code; possibly conceptual)

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Complex class: constructors, setters/getters, print
└── subtask2.cpp      # Employee class: overloaded constructors, destructor, setters/getters, print; overloaded myFun
```

## Key Implementations & Notes

### Subtask 1: Complex Class
- Private members: `int real`, `int img`
- Overloaded constructors print "CTOR" for tracing
- Setters and getters for real and imaginary parts
- `print()` displays real and imaginary values
- User input for real and img, then create and print object

### Subtask 2: Employee Class
- Private members: `int id`, `char* name`, `int age`, `float salary`
- Overloaded constructors print "CTOR" for tracing
- Destructor prints "DTOR" for tracing
- Setters and getters for all attributes
- `print()` displays all employee details
- Overloaded `myFun`:  
  - By value: copies object (triggers ctor/dtor)  
  - By pointer: accesses via ->  
  - By reference: accesses directly (no copy)  
- User input for id, name (using getline), age, salary; create object and call all myFun variants

> Note: Name is `char*` – careful with memory management (not dynamically allocated here). Tracing shows lifecycle in console output.

## Sample Outputs

**Subtask 1 (Complex):**
```
Enter real: 3
Enter img: 4

 CTOR
Real: 3
Img: 4
```

**Subtask 2 (Employee):**
```
Enter employee id: 101
Enter employee name: Jane Doe
Enter employee age: 28
Enter employee salary: 60000

 CTOR

===Employee===
ID: 101
Name: Jane Doe
Age: 28
Salary: 60000
 DTOR  # from by-value copy

===Employee===
ID: 101
Name: Jane Doe
Age: 28
Salary: 60000

===Employee===
ID: 101
Name: Jane Doe
Age: 28
Salary: 60000

 DTOR  # object destruction
```

## Learning Outcomes
- Constructor overloading for flexible object initialization
- Destructor usage for cleanup and tracing
- Encapsulation with accessors/mutators
- Function overloading based on parameter types (value, pointer, reference)
- Understanding object copying (by value) vs referencing
- Lifecycle management and tracing

Advancing OOP skills with lifecycle hooks and overloading! 🚀