

# EXPERIMENT 09: REFERENCES AND POINTERS IN C++

## AIM
To understand the concept of references and pointers in C++ and implement programs that demonstrate referencing, dereferencing, and memory manipulation using pointers.

## TOOLS USED
- **Language**: C++  
- **Compiler**: g++ (GNU Compiler Collection)  
- **Platform**: Linux / Windows / macOS (any system with a C++ compiler)  
- **Editor/IDE**: Visual Studio Code / Code::Blocks / Terminal-based editor  

## THEORY

### POINTERS
A **pointer** is a variable that stores the memory address of another variable. It allows direct access and manipulation of memory locations, making it powerful but also prone to errors if not used carefully.

#### Syntax:
```cpp
datatype* pointerName;
```
## EXPERIMENT 09(A): POINTER BASICS IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** an integer variable `a` and initialize it with the value `10`.
3. **Declare** a pointer variable `a_ptr` and assign it the address of `a` using the address-of operator `&`.
4. **Print** the value of variable `a`.
5. **Print** the memory address of variable `a` using `&a`.
6. **Print** the value stored in the pointer variable `a_ptr`, which should be the same as the address of `a`.
7. **Print** the value pointed to by `a_ptr` using the dereference operator `*`.
8. **End** the program.

## EXPERIMENT 09(B): POINTERS WITH DIFFERENT DATA TYPES IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** an integer variable `a` and initialize it with a value (e.g., 10).
3. **Declare** a pointer `a_ptr` and assign it the address of `a`.
4. **Declare** a float variable `b` and initialize it (e.g., 9.81).
5. **Declare** a pointer `b_ptr` and assign it the address of `b`.
6. **Declare** a double variable `c` and initialize it (e.g., 10.0123456789).
7. **Declare** a pointer `c_ptr` and assign it the address of `c`.
8. **Declare** a char variable `d` and initialize it (e.g., 'A').
9. **Declare** a pointer `d_ptr` and assign it the address of `d`.
10. **Display** the values and corresponding memory addresses using dereferencing and the pointer variables.
11. **Increment** the values pointed to by each pointer using the increment operator `++`.
12. **Print** the incremented values to show changes via pointer dereferencing.
13. **Re-display** the updated memory addresses to verify that addresses remain unchanged.
14. **Print** the size of each data type by using `sizeof(*pointer)`.
15. **End** the program.

## EXPERIMENT 09(C): REFERENCE VARIABLES IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** an integer variable `x` and initialize it with a value (e.g., 5).
3. **Declare** a reference variable `ref` and bind it to the variable `x` using `int &ref = x;`.
4. **Print** the value of `x` and `ref` to show that they are the same.
5. **Modify** the value of `x` (e.g., `x = 10`) and print both `x` and `ref` to observe the change.
6. **Modify** the value of `ref` (e.g., `ref = 20`) and again print both `x` and `ref` to verify that both reflect the updated value.
7. **Print** the memory address of `x` and `ref` using the address-of operator `&` to show they share the same memory location.
8. **End** the program.

## EXPERIMENT 09(D): POINTER TO POINTER IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** an integer variable `a` and initialize it with a value (e.g., 100).
3. **Declare** a pointer variable `ptr` and assign it the address of `a` using `int *ptr = &a;`.
4. **Declare** another pointer `pptr` (pointer to pointer) and assign it the address of `ptr` using `int **pptr = &ptr;`.
5. **Print** the value of `a` directly.
6. **Print** the value of `a` using the single pointer `*ptr`.
7. **Print** the value of `a` using the double pointer `**pptr`.
8. **Print** the address of `a` using `&a`, and compare it with the value of `ptr` and `*pptr`.
9. **Print** the address of `ptr` using `&ptr`, and compare it with the value of `pptr`.
10. **Demonstrate** how all three (variable, pointer, pointer-to-pointer) are connected.
11. **End** the program.

## EXPERIMENT 09(E): STRING MANIPULATION USING POINTER IN C++

### ALGORITHM

1. **Start** the program.
2. **Declare** a character array `str` with sufficient size (e.g., `char str[100]`).
3. **Declare** a character pointer `str_ptr` and assign it to point to `str`.
4. **Prompt** the user to **enter a string**, and **read** it into the array `str` using `cin`.
5. **Initialize** the pointer `str_ptr` to the base address of the string.
6. **Use a while loop** to iterate over each character of the string until the null terminator `'\0'` is encountered:
   - In each iteration, **print** the character pointed to by `str_ptr`.
   - **Increment** the pointer to move to the next character.
7. **Print** a newline after the loop to format output.
8. **End** the program.

## CONCLUSION

In this experiment, I explored the concept of pointers and their application in string manipulation using C++. By using a character pointer to traverse and display a string, I learned how pointers can directly access and manipulate data stored in memory. This experiment helped me in the understanding of pointer arithmetic, the relationship between arrays and pointers, and how strings are represented and processed in memory. Mastering these foundational concepts is essential for efficient and low-level programming in C++.
# Experiment_9
