//Team problem from Codeforces
//http://codeforces.com/problemset/problem/231/A

#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int p, v, t;
	int count = 0;
	int solved;


	for(int i = 0; i < n; i++) {
		cin >> p >> v >> t;
		 solved = p + v + t;

		 if (solved >= 2)
			 count++;
	}

	cout << count;


	//system("pause");
	return 0;
}