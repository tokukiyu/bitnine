# Implement the following piecewise recurrence relation in the 3 different ways.
- Explain the differences (advantages, disadvantages) between the 3.
- Must be written in C
### The problem
F(n) = F(n-3) + F(n -2) where F(0) = 0, F(1) = 1, and F(2) = 2. Assume that n will be less than or equal to the maximum integer value and non-negative. You only need to write the function(s).



```
# Piecewise Recurrence Relation Implementation in C

This repository contains C code to compute the value of the piecewise recurrence relation F(n) = F(n-3) + F(n-2), with initial conditions F(0) = 0, F(1) = 1, and F(2) = 2.

## Development Environment

- Programming Language: C
- Compiler: GCC (GNU Compiler Collection)

## Compilation

1. Make sure you have GCC (GNU Compiler Collection) installed on your system.

2. Open a terminal or command prompt.

3. Navigate to the directory containing the source code files.

4. To compile the source code, use the following command:

   ```bash
   gcc -o main main.c
   ```

   Replace `main` with your preferred executable name.

## Running the Program

1. After successfully compiling the source code, you will find an executable file in the same directory.

2. To run the program, use the following command:

   ```bash
   ./main
   ```

3. The program will prompt you to input the value of 'n' for which you want to compute F(n).

4. The program will then display the computed value of F(n) using three different approaches: recursive, memoization, and bottom-up dynamic programming.

## Example

Suppose you want to calculate F(10). Follow these steps:

1. Compile the source code:

   ```bash
   gcc -o main main.c
   ```

2. Run the program:

   ```bash
   ./main
   ```

3. Input the value `10` when prompted.

4. The program will display the computed values of F(10) using the three different approaches.

## Notes

- The source code files provided in this repository are for educational purposes and demonstrate the different approaches to solving the piecewise recurrence relation. They might not be optimized for extremely large input values.

- Feel free to modify and experiment with the code to better understand the concepts of recursion, memoization, and dynamic programming.

- If you encounter any issues or have questions, please feel free to open an issue in this repository.

```

Please note that this README is just a template and you can modify it to match your specific project structure, development environment, and additional information you might want to provide.