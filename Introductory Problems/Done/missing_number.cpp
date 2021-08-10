#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
  int n; cin >> n;
  int a[n+1] = {0};
  for(int i=1; i<n; i++){
    int temp; cin >> temp;
    a[temp] = 1;
  }
  for(int i=1; i<=n; i++){
    if(a[i] == 0){
      cout << i;
      break;
    }
  }
}
