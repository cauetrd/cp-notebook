#include <bits/stdc++.h>

using namespace std;

// for c++17 and beyond, gcd and lcm are built-in functions, and 
// they're very probably just better to use then this bellow, but still:

/* SIMPLE EUCLIDIAN GCD (MDC POR ALGORITMO DE EUCLIDES)

g = gcd(a,b) -> g|a ^ g|b
g|a ^ g|b -> g|(a-bx);  tal que  b > (a-bx) >= 0;    (a-bx) == a%b;
g|b ^ g|(a%b) -> g|(b-(a%b)) 

gcd(x, 0) == x;

*/
int euclidian_gcd (int a, int b){
    while(b > 0){
        a %=b;
        swap(a,b);
    }
    return a;
}

/* LCM (MMC)
gcd is double counted, so remove it;
*/

int lcm (int a, int b){
    return (a/ euclidian_gcd(a,b)) *b;
}

