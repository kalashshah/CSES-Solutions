#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
  int n; cin >> n;
  if(n == 1){
      cout << 1;
      return;
  }
  if(n <= 3){
      cout << "NO SOLUTION";
      return;
  }
  vector<int> v;
  for(int i=2; i<=n; i+=2)
      v.push_back(i);
  for(int i=1; i<=n; i+=2)
      v.push_back(i);
  for(int i=0; i<n; i++)
    cout << v[i] << " ";
}
