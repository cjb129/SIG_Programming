//String Task problem from Codeforces
//http://codeforces.com/problemset/problem/118/A

#include<iostream>
#include<string>
#include<ctype.h>
#include<stdio.h>

using namespace std;

int main() {
	string input;
	cin >> input;
	char c;
	//input.tolower();

	for (int i = 0; i < input.size(); i++) {
		c = input[i];
		//cout << ".";
		//c.tolower();
		if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='Y') {
			continue;
		}
		else {
			cout << ".";
			putchar(tolower(c));
		}

	}

	//system("pause");



	return 0;
}
