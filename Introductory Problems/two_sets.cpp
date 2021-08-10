#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main(){
  ll n; cin >> n;
  bool flag = true;
  ll sum = ((n*(n+1))/2)/2;
  vector<ll> first, second;
  ll fir = 0, sec = 0;
  for(ll i=n; i>0; i--){
    if(sum >= i)
      first.push_back(i), sum -= i, fir += i;
    else
      second.push_back(i), sec += i;
  }
  reverse(first.begin(), first.end());
  reverse(second.begin(), second.end());

  if(fir != sec){
    cout << "NO\n";
    return 0;
  }
  cout << "YES\n" << first.size() << "\n";
  for(ll i : first)
    cout << i << " ";
  cout << "\n" << second.size() << "\n";
  for(ll i : second)
    cout << i << " ";
}