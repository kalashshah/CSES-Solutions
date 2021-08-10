#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
void solve();
int freq[26];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string s; cin >> s;
  int even=0, odd=0, oddIndex = -1;
  for(char ch : s)
    freq[ch-'A']++;
  for(int i=0; i<26; i++){
    if(freq[i] % 2) odd++, oddIndex = i;
    else even++;
  }
  if(odd > 1){
    cout << "NO SOLUTION";
    return 0;
  }
  string prefix, suffix;
  for(int i=0; i<26; i++){
    while(freq[i] % 2 == 0 && freq[i])
      prefix += (char)('A'+i), freq[i]-= 2;
  }
  suffix = prefix;
  reverse(suffix.begin(), suffix.end());
  if(oddIndex != -1){
      for(int i=0; i<freq[oddIndex]; i++)
        prefix += (char)('A'+ oddIndex);
  }
  string ans = prefix + suffix;
  cout << ans;
}