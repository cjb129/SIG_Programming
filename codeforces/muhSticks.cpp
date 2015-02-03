//MUH and Sticks, solved 2/3/15
//http://codeforces.com/problemset/problem/471/A

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	vector<int> sticks;
	for(int i = 0; i < 6; i++) {
		cin >> n;
		sticks.push_back(n);
	}
	
	vector<int>foo(10,0);
	for(int i = 0; i < 6; i++) {
		for(int j = 1; j <= 9; j++) {
			if(sticks[i]==j) {
				foo[j]++;
			}
		}
	}

	vector<int> nums;
	bool alien=true;
	for(int i = 0; i <= 9; i++) {
		if(foo[i] > 0) nums.push_back(foo[i]);
		if(foo[i]>=4) alien=false;
	}
	
	if(alien || nums.size()>3 || (nums[0]==2&&nums[1]==2)) 
		cout << "Alien";
	else if(nums.size()==3) cout << "Bear";
	else if(nums.size()==2) {
		if(nums[0] == 5 || nums[1] == 5) cout << "Bear";
		else cout << "Elephant";
	}
	else cout << "Elephant";

	cout << endl;
}
