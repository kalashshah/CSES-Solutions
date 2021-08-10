#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
void solve();
int main(){
  int cases;
  cin >> cases;
  while(cases--)
    solve();
}
void solve() {
  int y, x; 
  cin >> y >> x;
  int z = max(x, y);
  ll ans = (ll)z * z - (z == y ? (z % 2 == 0 ? x - 1 : z + y - x - 1) : (z % 2 == 0 ? z + x - y - 1: y - 1));
  cout << ans << endl;
}