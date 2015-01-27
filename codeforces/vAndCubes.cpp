//Vanya and Cubes, solved 1/27/15
//http://codeforces.com/contest/492/problem/A

#include<iostream>
using namespace std;

int main() {
	int n, count = 1, f=0, total=0;
	cin >> n;
	
	for(int i = 1; i < n;i++) {
		f+=i;
		total+=f;
		if(total>n) break;
		count = i;
	}
	
	cout << count << endl;
}
