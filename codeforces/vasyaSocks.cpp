//Vasya and Socks, solved 12/11/14
//http://codeforces.com/problemset/problem/460/A

#include<iostream>
#include<vector>
using namespace std;

int main() {
  int n, m;

  cin >> n >> m;
  int count = 0;
  for(int i = 1; i <= n; i++) {
    //cout << m << " " << i << endl;
    if(i%m==0) { n++; }
    count++;
  }
  //if(n==1) count++;
  cout << count << endl;
}
