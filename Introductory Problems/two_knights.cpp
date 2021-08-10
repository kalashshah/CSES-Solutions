#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
void solve();
int main(){
  int n; 
  cin >> n;
  ll ways, ans = 0;
  for(int k=1; k<=n; k++){
    ways = k*k;
    ans = ways*(ways-1)/2;
    if(k>2)
      ans -= 4 * (k-1) * (k-2);
    cout << ans << endl;
  }
}
