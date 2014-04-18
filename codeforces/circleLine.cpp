//Circle Line, solved 4/18/14
//http://codeforces.com/problemset/problem/278/A

#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int>cir;
	for(int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		cir.push_back(tmp);
	}

	int stat;
	int det;
	cin >> stat >> det;

	int start = min(stat, det);
	int dest = max(stat, det);

	int way1 = 0;
	for(int i = start-1; i < dest-1; i++) {
		way1 += cir[i];
		cir[i]=0;
	}
	int way2 = 0;
	for(int i = 0; i < cir.size(); i++) {
		way2 += cir[i];
	}

	cout << min(way1, way2);

	//system("pause");
	return 0;
}
