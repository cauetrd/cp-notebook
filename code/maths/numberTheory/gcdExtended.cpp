#include <bits/stdc++.h>

using namespace std;

/* EXTENDED EUCLIDIAN ALGORITHM
returns gcd(a,b) as well as x and y such that a.x + b.y = gcd(a,b);
the iterative version is faster, but way harder to comprehend.
*/

// honestly, blackbox.
int gcd(int a, int b, int& x, int& y) {
    x = 1, y = 0;
    int x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1) {
        int q = a1 / b1;
        tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);
        tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}

/* RECURSIVE
when gcd(a,b) = g is found, there is:
1.g + 0.0 = g;

now, assume there is x1, y1 such b.x1 + (a%b).y1 = g;
and from there, lets try to "up a step", find x and y such a.x + b.y = g;
as stated in .\gcdBasics.cpp, a%b = a - (a/b)*b; !disclaimer!: a/b is the floor of a/b, as default in cpp;
so, b.x1 + (a - (a/b)*b)*y1 = g;
b.x1 + a.y1 - (a/b)*b*y1 =g;
a.y1 + b(x1 - (a/b)*y1) =g;
therefore, as intended:
x = y1;
y = x1 - (a/b)*y1;

*/
int recursive_extended_gcd(int a, int b, int& x, int& y){
    if(b == 0){
        x = 1;
        y =0;
        return a; //gcd is found;
    }
    int x1, y1;
    int g = recursive_extended_gcd(a, a%b, x1, y1);
    
    int x = y1;
    int y = x1 - y1*(a/b);

    return g;
}
