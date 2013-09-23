//Domino Piling problem from Codeforces
//http://codeforces.com/problemset/problem/50/A

#include<iostream>

using namespace std;

int main() {

	int x, y;
	int total = 0;
	int boardSize;

	cin >> x >> y;

	boardSize = x * y;

	while(boardSize > 1) {
		boardSize -= 2;
		total++;
	}

	cout << total;



	//system("pause");
	return 0;
}