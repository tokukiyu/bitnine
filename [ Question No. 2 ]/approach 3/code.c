/**

## Approach 3: Bottom-Up Dynamic Programming (Iterative)
### Advantages:
Efficient and optimal solution in terms of both time and space complexity.
No recursion overhead.
Suitable for calculating F(n) for large values of n.

### Disadvantages:

Requires more code to implement compared to the recursive approaches.
Doesn't have the direct mathematical representation of the recurrence relation as in the recursive approaches.

*/


#include <stdio.h>

int bottomUpF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 3] + dp[i - 2];
    }
    
    return dp[n];
}

int main() {
    int n = 10;
    printf("F(%d) = %d\n", n, bottomUpF(n));
    return 0;
}
