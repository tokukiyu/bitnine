/*
Approach 1: Recursive Function
Advantages:

Simple and intuitive.
Direct representation of the mathematical definition.
Easy to understand and implement.
Disadvantages:

High time complexity due to repeated recursive calls, leading to exponential time complexity.
Significant overhead and redundant computations for larger values of n

*/
#include <stdio.h>

int recursiveF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    return recursiveF(n - 3) + recursiveF(n - 2);
}

int main() {
    int n = 10; // You can change this to any value you want to compute F(n) for.
    printf("F(%d) = %d\n", n, recursiveF(n));
    return 0;
}
