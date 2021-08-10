#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
int main(){
  string s; cin >> s;
  char pre = s.at(0);
  int count = 0, maxCount = 0;
  for(char ch : s){
      count = (ch == pre ? count+1 : 1);
      pre = ch;
      maxCount = max(maxCount, count);
  }
  cout << maxCount;
}
