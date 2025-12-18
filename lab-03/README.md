# OOP Lab 3: Arrays and Strings in C++

## Lab Overview
This laboratory introduces fundamental data structures in C++:
- One-dimensional and two-dimensional arrays
- Basic array operations (input, output, max/min, sum, search, sorting)
- Character arrays (C-style strings) and string manipulation
- Handling user input with `cin.getline()` for safe string reading

The program is divided into 5 subtasks, each focusing on a specific aspect of arrays and strings.

## Requirements (as given in the lab)
1. **One-dimensional array of integers** (size 10)  
   - Insert data  
   - Print the array  
   - Find max and min values  
   - Calculate sum  
   - Linear search for a value (report first occurrence: found/not found)  
   - Sort the array using bubble sort and print sorted version  

2. **Two-dimensional array** (3 rows × 4 columns)  
   - Insert data  
   - Print the matrix  
   - Calculate and print sum of each row  
   - Calculate and print average of each column  

3. Take two strings from user and concatenate them into a third variable (with space in between)  

4. Store names of 3 students in a 2D character array and print them  

5. Take a string from user and convert all letters:  
   - Capital → small  
   - Small → capital  
   (Toggle case using ASCII manipulation)

## Project Structure
```
.
├── main.cpp          # Entry point (includes one subtask at a time)
├── subtask1.cpp      # 1D array operations + bubble sort
├── subtask2.cpp      # 2D array: input, print, row sums, column averages
├── subtask3.cpp      # String concatenation using strcat
├── subtask4.cpp      # Array of student names
└── subtask5.cpp      # Toggle case in a string
```

## Code Highlights & Notes

### Subtask 1: 1D Array Operations
- Fixed size 10
- Pretty ordinal suffixes in prompts (1st, 2nd, 3rd, etc.)
- Implements max, min, sum using loops
- Linear search reports only presence (first occurrence breaks loop)
- Bubble sort sorts in ascending order and prints result

### Subtask 2: 2D Array (Matrix)
- 3×4 integer matrix
- Nested loops for input and display
- Row sums calculated correctly
- Column averages use integer division (`sum/4`)

### Subtask 3: String Concatenation
- Uses C-style strings (`char[]`)
- `strcat()` to concatenate first name, space, and last name

### Subtask 4: Array of Strings
- 2D char array: 3 students × max 15 characters per name
- Safe input using `cin.getline()`

### Subtask 5: Case Toggle
- Reads string up to 10 characters
- Loops through each character and toggles case using ASCII offset (±32)
- Ignores non-letter characters (prints as-is)

## Sample Output Examples

**Subtask 1 (partial):**
```
enter the 1st number: 5
...
Max value is: 42
Min value is: 3
sum is: 312

enter a value to search for: 80
found

[ 3 5 10 ... 42 ]
```

**Subtask 2 (partial):**
```
Sum of row 1 : 150
Sum of row 2 : 210
Sum of row 3 : 180

Avg of col 1 : 45
Avg of col 2 : 52
...
```

**Subtask 3:**
```
enter a text: Ahmed
enter another text: Aly

Ahmed Aly
```

**Subtask 5:**
```
enter a text: HeLLo

hEllO
```

## Learning Outcomes
- Understanding fixed-size arrays (1D and 2D)
- Manual array traversal and manipulation
- Implementing basic algorithms (search, sort)
- Working with C-style strings and safe input methods
- Character encoding and case conversion via ASCII

Excellent practice before moving to dynamic memory and classes! 🚀