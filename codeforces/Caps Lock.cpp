//Codeforces problem cAPS lOCK
//http://codeforces.com/problemset/problem/131/A

#include<iostream>
#include<string>
#include<cctype>
#include<vector>

using namespace std;

bool caseCheck(string c) {
	for(int i = 1; i < c.size(); i++) {
		if (islower(c[i])) {
			return false;
		}
	}
}

string convert(string c) {
	for(int i = 0; i < c.size(); i++) {
		if (islower(c[i])) {
			c[i] = toupper(c[i]);
		}
		else
			c[i] = tolower(c[i]);
	}
	
	
	return c;
}

int main() {

	string c;
	cin >> c;
	string s;
	

	if (caseCheck(c)) {
		s = convert(c);
	}
	else {
		s = c;
	}

	cout << s << endl;
	



	//system("pause");
	return 0;
}