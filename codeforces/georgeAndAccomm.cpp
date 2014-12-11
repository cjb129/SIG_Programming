//George and Accommodation, solved 12/11/14
//http://codeforces.com/problemset/problem/467/A

#include<iostream>
using namespace std;

int main() {
  int n, p, q;
  cin >> n;
  int count = 0;
  for(int i = 0; i < n; i++) {
    cin >> p >> q;
    if(q-p >=2) count++;
  }
  cout << count << endl;
}
