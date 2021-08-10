#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void grayCode(int n){
  for (int i = 0; i < (1 << n); i++){
      int val = (i ^ (i >> 1));
      bitset<32> r(val);
      string s = r.to_string();
      cout << s.substr(32 - n) << "\n";
  }
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin >> n;
  grayCode(n);
}
