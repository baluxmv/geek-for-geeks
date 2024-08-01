# [Sum of all divisors from 1 to n](https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1)
## Math
#### Algorithm / Intuition
To find the sum of all divisors from 1 to `N`, observe that each number `i` 
contributes to the total sum based on how many times it appears as a divisor 
for numbers up to `N`.

Specifically, each integer `i` appears as a divisor in all its multiples up 
to `N`. Thus, the total contribution of each integer `i` is `i × (N / i)`, 
where `(N / i)` is the number of multiples of `i` up to `N`.

#### Algorithm
1. Initialize a variable `sum` to 0.
2. Iterate from 1 to `N`:
   - For each integer `i`, compute how many times `i` divides numbers up to 
    `N` (multiples).
   - Compute the contribution of `i` and add it to `sum`.
3. Return the value of `sum`.

#### Code
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumOfDivisors(int N) {
        long long sum = 0;
        int divisorCount;

        for (int i = 1; i <= N; ++i) {
            // Calculate how many times i divides numbers up to N
            int divisorCount = N / i;

            // Add the contribution of i to the total sum of divisors
            sum += divisorCount * i;
        }
        return sum;
    }
};
```
#### Complexity Analysis
**Time Complexity: `O(n)`**
- Iterating from 1 to `N` takes `O(n)` time.
- Each iteration involves `O(1)` constant time operations. 
Thus, the total time complexity is `O(n) + O(1) = O(n)`.

**Space Complexity: `O(1)`**
- The algorithm uses a constant amount of extra space. It only requires a few 
variables, and the space needed does not depend on the input size. 
Thus, the space complexity is `O(1)`, meaning that the space required does not
scale with the input size.

