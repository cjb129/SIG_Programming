//Magnets, solved 4/18/14
//http://codeforces.com/problemset/problem/344/A

#include<iostream>
#include<vector>
using namespace std;

int main() {

	int n;
	cin >> n;

	vector<int>mags;

	for(int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		mags.push_back(tmp);
	}
	int count = 0;
	for(int i = 0; i < mags.size()-1; i++) {
		if(mags[i] != mags[i+1])
			count++;
	}

	cout << count +1;

	//system("pause");
	return 0;
}
