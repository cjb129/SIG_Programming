//Design Tutorial: Learn from Math, solved 12/11/14
//http://codeforces.com/problemset/problem/472/A

#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;

  int a, b;
  for(int i = 4; i < n; i++) {
    a = n - i;
    b = n - a;
    
    bool aComp = false;
    bool bComp = false;
    for(int i = 2; i < a; i++) {
      if(a%i==0) {aComp = true; break;}
    }
    for(int i = 2; i < b; i++) {
      if(b%i==0) {bComp = true; break;}
    }

    if(aComp && bComp) break;
  }
  cout << a << " " << b << endl;
}
