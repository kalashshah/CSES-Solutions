#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
void solve();
int main(){
    solve();
}
void solve() {
  ll n; cin >> n;
  while(n != 1){
    cout << n << " ";
    n = (n % 2 == 0 ? n / 2: n * 3 + 1);
  }
  cout << 1;
}