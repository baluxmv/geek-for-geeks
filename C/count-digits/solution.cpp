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
