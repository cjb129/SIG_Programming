//Presents, solved 2/28/14
//http://codeforces.com/problemset/problem/136/A

#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	int soup;
	int newv[101];

	vector<int> orig;
	//vector<int> newv;
	orig.push_back(0);

	for(int i = 1; i <= n; i++) {
		cin >> soup;
		orig.push_back(soup);
	}

	for(int i = 1; i <= n; i++) {
		newv[orig[i]]=i;
	}

	for(int i = 1; i<= n; i++) {
		cout << newv[i] << " ";
	}


	//system("pause");
	return 0;
}
