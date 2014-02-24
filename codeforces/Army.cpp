//Army, solved 2/24/14
//http://codeforces.com/problemset/problem/38/A

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	int d, a, b;
	vector<int>years;

	for(int i = 0; i < n-1; i++) {
		cin >> d;
		years.push_back(d);
	}

	cin >> a >> b;
	int count = 0;
	for(int i = a-1; i <= b-2; i++) {
		count += years[i];

	}

	cout << count;


	//system("pause");
	return 0;
}
