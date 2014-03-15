//Chat Room, solved 3/14/14
//http://codeforces.com/problemset/problem/58/A

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	bool yes = false;

	string given;
	vector<char> word;

	cin >> given;

	
	for(int i = 0; i < given.length(); i++) {
		if(given[i] == 'h') {
			word.push_back('h');
			for(int j = i+1; j < given.length(); j++) {
				if(given[j] == 'e') {
					word.push_back('e');
					for(int k = j+1; k < given.length(); k++) {
						if(given[k] == 'l') {
							word.push_back('l');
							for(int l = k+1; l < given.length(); l++) {
								if(given[l] == 'l') {
									word.push_back('l');
									for(int m = l+1; m < given.length(); m++) {
										if(given[m] == 'o') {
											word.push_back('o');
											yes = true;
											break;
										}
									}
									break;
								}
							}
							break;
						}
					}
					break;
				}
			}
			break;
		}
	}
	

	if (yes) cout << "YES";
	else cout << "NO";
	


	//system("pause");
	return 0;
}
