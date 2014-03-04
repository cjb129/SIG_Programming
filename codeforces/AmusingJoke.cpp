//Amusing Joke, solved 3/3/14
//http://codeforces.com/problemset/problem/141/A


#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	string a, b, c, e;

	cin >> a >> b >> c;


	vector<char> newC, newStr;

	for(int i = 0; i < c.size(); i++) {
		newC.push_back(c[i]);
	}

	e = a.append(b);

	for(int i = 0; i < e.size(); i++) {
		newStr.push_back(e[i]);
	}

	sort(newC.begin(), newC.end());
	sort(newStr.begin(), newStr.end());

	if(newC == newStr) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}


	//system("pause");
	return 0;
}
