//Calculating Function, solved 12/19/14
//http://codeforces.com/problemset/problem/486/A

#include<iostream>
using namespace std;
int main() {
	long long n, m;
	cin >> n;

	bool eo = true;
	if(n%2==0) eo = true;
	else eo = false;
	if(!eo) n+=1;

	m = n/2;
	if(!eo) m=m*-1;	
	

	cout << m << endl;
}
