//Buttons, solved 4/18/14
//http://codeforces.com/problemset/problem/268/B

#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int count = n;
	for(int i = 1; i <= n-1; i++) {
		count += i*(n-i);
	}

	cout << count;

	//system("pause");
	return 0;
}
