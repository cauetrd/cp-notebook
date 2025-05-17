#include <bits/stdc++.h>

using namespace std;


#define ll long long
#define vll vector<long long>


vll fac;

/* C(n) = Combinacao(2n) * 1/(n+1)
                    ( n)   

C(n) = nº de sequencias a com n elementos +1 e n elementos -1,
tal que p todo k, 1<=k <=2n; a1 + a2 +...+ak >=0;
Aplicações: 
sequencias de parenteses
qtd de arvores binarias
etc depois escrevo o resto
*/

ll Catalan(ll n){
    return Comb(2*n,n,mod)*expMod(n+1,mod-2,mod);
}
