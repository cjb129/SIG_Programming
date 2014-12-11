//Initial Bet, solved 12/11/14
//http://codeforces.com/problemset/problem/478/A

#include<iostream>
using namespace std;

int main() {
  int n, m;
  m = 0;
  for(int i = 0; i < 5; i++) {
    cin >> n;
    m += n;
  }
  if(m==0) {cout << "-1\n"; return 0;}
  if(m%5==0) cout << m/5 << endl;
  else cout << "-1\n";
}
