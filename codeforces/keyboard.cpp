//Keyboard, solved 12/19/14
//http://codeforces.com/problemset/problem/474/A

#include<iostream>
#include<vector>
using namespace std;

int main() {
	string keys = "qwertyuiopasdfghjkl;zxcvbnm,./";

	char in;
	cin >> in;

	string inn;
	cin >> inn;
	string news = "";
	size_t f;
	if(in == 'R') {
		for(int i = 0; i < inn.length(); i++) {
			f = keys.find(inn[i]);
			news += keys.at(f-1);
		}
	}
	else {
		for(int i = 0; i < inn.length(); i++) {
			f = keys.find(inn[i]);
			news+= keys.at(f+1);
		}
	}
	cout << news << endl;
}
