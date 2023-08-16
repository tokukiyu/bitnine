/*
Approach 2: Memoization (Top-Down Dynamic Programming)
Advantages:

Avoids redundant computations by storing previously calculated values in the memoization array.
Improved time complexity compared to the pure recursive approach for larger values of n.
Disadvantages:

Still has some overhead due to recursive calls.
Requires extra memory for the memoization array.

*/


#include <stdio.h>

int memo[1000]; // Adjust the array size as needed

int memoizedF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    if (memo[n] != -1) return memo[n];
    
    memo[n] = memoizedF(n - 3) + memoizedF(n - 2);
    return memo[n];
}

int main() {
    int n = 10;
    for (int i = 0; i < 1000; i++) memo[i] = -1; // Initialize the memoization array
    printf("F(%d) = %d\n", n, memoizedF(n));
    return 0;
}
