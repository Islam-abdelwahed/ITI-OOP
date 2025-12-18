# OOP Lab 11: Abstract Classes and Polymorphism in C++

## Lab Overview
This laboratory focuses on advanced OOP features:
- Abstract base classes with pure virtual functions
- Polymorphism through base pointers and virtual methods
- Shape hierarchy for area calculation and printing
- Arrays of base pointers for heterogeneous objects

The program includes two subtasks: one for abstract area calculation and one for polymorphic printing of geometric shapes.

## Requirements (as given in the lab)
1. Abstract `Shape` class with pure virtual `CalcArea()`  
   - Derived: Rectangle, Triangle, Square, Circle  
   - Function `myfun(Shape*)` (likely to call CalcArea polymorphically)  
   - Array of Shape pointers to compute total area (e.g., farm shapes)  

2. `Geoshape` base class with virtual `Print()`  
   - Derived: Rectangle, Triangle, Circle (with center Point and radius)  
   - Function `myfun(Geoshape*)` to print polymorphically  

## Project Structure
```
.
├── main.cpp          # Entry point – includes one subtask at a time for demonstration
├── subtask1.cpp      # Abstract Shape hierarchy for area calculation; array of pointers
└── subtask2.cpp      # Geoshape hierarchy with virtual Print; polymorphic MyFun
```

## Key Implementations & Notes

### Subtask 1: Abstract Shape for Area
- Abstract `Shape` with protected dims, name; pure virtual `CalcArea()`
- Setters: virtual for dims (overridable)
- Derived classes:
  - `Rectangle`: area = dim1 * dim2
  - `Square`: area = dim1 * dim1 (dim2 = dim1)
  - `Triangle`: area = 0.5 * dim1 * dim2
  - `Circle`: area = 3.14 * dim1 * dim1 (radius as dim1)
- Array of `Shape*` holds derived objects; `calc(Shape* s[])` sums areas
- Demo creates Square(5), Rectangle(5,6), Triangle(2,5), Circle(5); computes total

### Subtask 2: Geoshape with Virtual Print
- Base `Geoshape` with virtual `Print() = 0` (abstract)
- `Point` class for coordinates (constructors, setters, print)
- Derived:
  - `Rectangle`: two Points (ul, lr); Print shows points
  - `Triangle`: three Points (head, b1, b2); Print shows points
  - `Circle`: one Point (center), int radius; Print shows center and radius
- `MyFun(Geoshape* g)` calls `g->Print()` polymorphically
- Demo: Creates Rectangle via new, calls MyFun

> Note: Tracing with CTOR/DTOR messages. Polymorphism via base pointers. No memory deallocation in demo (leak for simplicity).

## Sample Outputs

**Subtask 1 (Area Calculation):**
```
Area of Farm = 78.7  # Approx: Square(25) + Rect(30) + Tri(5) + Circle(78.5/3.14*25)
```

**Subtask 2 (Polymorphic Print):**
```
Point 2 Parameters CTOR
Point 2 Parameters CTOR
Rectangle print:
{1 2}
{3 4}
```

## Learning Outcomes
- Defining abstract classes with pure virtual functions
- Implementing polymorphic behavior via base pointers/arrays
- Overriding virtual methods in derived classes
- Shape hierarchies for real-world modeling
- Understanding runtime polymorphism and vtables

Powerful demo of abstraction and polymorphism! 🚀