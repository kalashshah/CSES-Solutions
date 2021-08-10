#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
void solve();

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int cases;
  cin >> cases;
  while(cases--)
    solve();
}
void solve(){
  ll a, b;
  cin >> a >> b;
  bool flag = true;
  if((a+b) % 3)
    flag = false;
  if(a > b)
    swap(a, b);
  if(a == 0 && b)
    flag = false;
  else if((double)b/a > 2)
    flag = false;
  cout << (flag ? "YES\n" : "NO\n");
}