#include <bits/stdc++.h>

using namespace std;

/* LINEAR DIOFANTINE EQUATIONS
ax + by + c with a,b and c given integers solving for x and y integers.

by .\gcdExtended.cpp, we can find ax' + by' = g with g = gcd(a,b);
    therefore, if c is divisible by g, there are solutions, else there are none.
    ( a = t.g , b = r.g, c = t.g + r.g = (t+r).g)
from that, follows:
ax'.(c/g) + by'.(c/g) = c
a solution then is:
ax0 + by0 = c;
x0 = x'.(c/g)
y0 = y'.(c/g)

to generalize it, take the equation:
a(x0 + b/g) + b(y0 - a/g) =c;
ax0 + by0 + ab/g - ab/g = c; it's still true since g = gcd(a,b) then:
ax+ by = c;
x = x0 + k.(b/g);
y = y0 + k.(y/g);

*/

