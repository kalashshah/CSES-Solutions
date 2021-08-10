#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
ll power(ll base, ll exp, ll mod){
  if(exp == 0)
   return 1;  
  ll p = power(base, exp/2, mod);
  p = (p * p) % mod;
  return (exp % 2 == 0) ? p : (base * p) % mod;
}
int main(){
  int n; cin >> n;
  cout << power(2, n, 1000000007);
}