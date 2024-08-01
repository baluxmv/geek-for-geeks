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
