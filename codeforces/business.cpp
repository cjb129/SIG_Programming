//Business Trip, solved 2/28/14
//http://codeforces.com/problemset/problem/149/A

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int k;
	cin >> k;

	int mo;
	vector<int> mon;

	for(int i = 0; i < 12; i++) {
		cin >> mo;
		mon.push_back(mo);
	}

	sort(mon.begin(), mon.end());
	int foo = 0;
	int roo = 11;
	int count = 0;
	while (foo < k && roo >= 0) {
		foo+=mon[roo];
		roo--;
		count++;
	}

	if(foo < k) {
		cout << "-1";
	}
	else
		cout << count;

	//system("pause");
	return 0;
}
