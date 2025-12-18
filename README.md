# Object-Oriented Programming (OOP) Labs - C++

![C++ OOP Labs](https://img.shields.io/badge/Language-C++-blue.svg)
![Status](https://img.shields.io/badge/Status-Completed-brightgreen.svg)

## Overview
This repository contains my completed laboratory exercises for the **Object-Oriented Programming** course. Each lab focuses on building foundational and progressive C++ skills, starting from basic console I/O and control structures, moving toward core OOP concepts such as classes, inheritance, polymorphism, file handling, and more.

The labs are organized into separate folders (`lab-01`, `lab-02`, ..., `lab-12`) for clear separation and easy navigation.

## Repository Structure
```
OOP/
├── lab-01/          # Basic I/O, ASCII, type casting, arithmetic
├── lab-02/          # Control structures, loops, basic algorithms (prime, factorial, magic square, etc.)
├── lab-03/          # ...
├── lab-04/          # ...
├── lab-05/          # ...
├── lab-06/          # ...
├── lab-07/          # ...
├── lab-08/          # ...
├── lab-09/          # ...
├── lab-10/          # ...
├── lab-11/          # ...
├── lab-12/          # ...
└── README.md        # This file - overview of the entire OOP labs collection
```

Each lab folder contains:
- Source code files (`.cpp`)
- A dedicated `README.md` with detailed explanation, requirements, code breakdown, sample output, and lab-specific notes

## How to Compile and Run (General Instructions)
All labs are written in standard C++ and can be compiled using any C++ compiler (g++, clang++, MSVC, etc.).

### On Windows / Linux / macOS (using g++)
```bash
# Navigate to a specific lab folder
cd lab-XX

# Compile (example for single-file labs)
g++ main.cpp -o lab

# Or if multiple files
g++ *.cpp -o lab

# Run the program
./lab          # Linux/macOS
# or
lab.exe        # Windows
```

**Special Notes:**
- Some early labs (e.g., lab-02) use Windows-specific headers (`<windows.h>`, `<conio.h>`) for console positioning and input. These work best on Windows.
- Later labs focusing on pure OOP concepts are fully cross-platform.

For detailed compilation and execution steps specific to each lab (including any required flags or multiple source files), please refer to the `README.md` inside that lab's folder.

## Learning Progression
| Lab       | Main Topics Covered                              |
|-----------|--------------------------------------------------|
| lab-01    | Basic I/O, type casting, ASCII, arithmetic       |
| lab-02    | Loops, conditionals, basic algorithms            |
| lab-03+   | Classes, objects, constructors, destructors, inheritance, polymorphism, operator overloading, file I/O, templates, STL, etc. (progressing toward advanced OOP) |

Feel free to explore individual labs for detailed implementations and explanations!

Happy coding! 🚀