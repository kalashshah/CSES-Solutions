#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main(){
  int n; cin >> n;
  int zeros = 0;
  for(int i=5; n/i >=1; i*=5)
    zeros += n/i;
  cout << zeros;
}