# [Count Digits](https://www.geeksforgeeks.org/problems/count-digits5716/1)

## Integer to String Conversion
#### Algorithm / Intuition
To solve the problem of counting the number of digits in an integer `N` that evenly divide `N`, 
the main idea is to utilize the string representation of the number to easily access and process
each digit.

By iterating over each digit and checking its divisibility with `N`, we can determine how many of
these digits divide `N` without leaving a remainder. 
#### Algorithm 
1. Convert the integer `N` to its string representation to easily access each digit. 
2. Iterate over each character in the string, converting it to its corresponding integer value.
3. Check if this digit is not zero and if it divides `N` without leaving a remainder. 
4. Maintain a count of such digits.
5. Return the count of digits that evenly divide `N`.
#### Code
```cpp
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evenlyDivides(int N) {
        // Get the number as a string
        string numberString = to_string(N);
        
        // Check if the number is divisible by each digit
        int divisible = 0;
        for (char c : numberString) {
            // Convert char to int
            int digit = c - '0';
            
            // Check if digit is not zero and divides N
            if (digit != 0 && N % digit == 0) {
                divisible++;
            }
        }

        return divisible;
    }
};
```
#### Complexity Analysis
**Time Complexity: `O(n)`**
- Converting the integer `N` to a string using `to_string(N)` takes `O(n)` time, where `n` is the number of digits in `N`.
- The loop iterates over each digit in the string representation of `N`, which takes `O(n)` time.
- For each digit, the divisibility check `N % digit == 0` is done in `O(1)` constant time.
Thus, the total time complexity is `O(n) + O(n) + O(1) = O(n)`.

**Space Complexity: `O(n)`**
- Storing the string representation of `N` takes `O(n)` space, where `n` is the number of digits in `N`.
- The space for variables `divisible`, `digit`, and loop variables is constant `O(1)`.
Thus, the total time complexity is `O(n) + O(1) = O(n)`.


