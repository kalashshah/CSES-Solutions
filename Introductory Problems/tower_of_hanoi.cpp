#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

void towerOfHanoi(int disks, int from, int to, int aux){
  if(disks == 1){
    cout << from << " " << to << "\n";
    return;
  }
  towerOfHanoi(disks-1, from, aux, to);
  cout << from << " " << to << "\n";
  towerOfHanoi(disks-1, aux, to, from);
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n; cin >> n;
  int k = (int)pow(2, n) - 1;
  cout << k << "\n";
  towerOfHanoi(n, 1, 3, 2);
}
