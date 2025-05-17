#include <bits/stdc++.h>

using namespace std;


vector<pair<int, int>> primeFactorization(int n) {
    vector<pair<int, int>> factors;

    // Divide out 2 first
    int count = 0;
    while (n % 2 == 0) {
        n /= 2;
        count++;
    }
    if (count > 0) factors.emplace_back(2, count);

    // Now check odd numbers
    for (int i = 3; i*i <= n; i += 2) {
        count = 0;
        while (n % i == 0) {
            n /= i;
            count++;
        }
        if (count > 0) factors.emplace_back(i, count);
    }

    // If n is still > 1, it's a prime factor
    if (n > 1) factors.emplace_back(n, 1);

    return factors;
}