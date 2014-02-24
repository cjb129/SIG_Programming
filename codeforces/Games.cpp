//Games, solved 2/24/14
//http://codeforces.com/problemset/problem/268/A

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;

	int h, a;
	int count = 0;

	vector<int>home;
	vector<int>away;

	for(int i = 0; i < n; i++) {
		cin >> h;
		home.push_back(h);
		cin >> a;
		away.push_back(a);
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(home[i] == away[j]) {
				count++;
			}
		}
	}

	cout << count;



	//system("pause");
	return 0;
}
