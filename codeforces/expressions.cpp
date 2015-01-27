//Expressions, solved 1/27/15
//http://codeforces.com/problemset/problem/479/A

#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int mx = a * b * c;

	mx = max(mx, (a+b)*c);
	mx = max(mx, a*(b+c));
	mx = max(mx, a+b*c);
	mx = max(mx, a*b+c);
	mx = max(mx, a+b+c);

	cout << mx << endl;
	
}
