//Translation, solved 2/25/14
//http://codeforces.com/problemset/problem/41/A

#include<iostream>
#include<string>

using namespace std;

int main() {

	string f, s, news;

	cin >> f >> s;

	for(int i = 0; i < s.length(); i++) {
		if(f[i] != s[(s.length()-i)-1]){
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";



	//system("pause");
	return 0;
}
