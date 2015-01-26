//I Wanna Be The Guy, solved 1/26/15
//http://codeforces.com/problemset/problem/469/A

#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	int totalLevels;
	cin >> totalLevels;

	int x, y, tmp;
	set<int> lvls;
	cin >> x;
	for(int i = 0; i < x; i++) {
		cin >> tmp;
		lvls.insert(tmp);
	}
	cin >> y;
	for(int i = 0; i < y; i++) {
		cin >> tmp;
		lvls.insert(tmp);
	}
	set<int>::iterator it = lvls.end();
	if(*it != totalLevels)
		 cout << "Oh, my keyboard!" << endl;
	else
		cout << "I become the guy." << endl;
	
	
}
