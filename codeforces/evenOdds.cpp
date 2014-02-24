//Even Odds, solved 2/23/14
//http://codeforces.com/contest/318/problem/A

#include<iostream>
#include<vector>

using namespace std;

int main() {

	unsigned long long n, k, c;
	

	cin >> n >> k;

	if (n%2 != 0) {
		n+=1;
	}

	if (k > n/2) {
		cout << 2*(k-(n/2));
	}
	else {
		cout << 2*k - 1;
	}

	
	//system("pause");
	return 0;
}
