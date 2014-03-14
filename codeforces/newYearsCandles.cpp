//New Years Candles, solved 3/14/14
//http://codeforces.com/problemset/problem/379/A

#include<iostream>

using namespace std;

int main() {

	int candles, wax;

	cin >> candles >> wax;

	int newcand = candles;

	while(candles >= wax) {
		candles -= wax;
		candles++;
		newcand++;
		//cout << candles << " " << endl;
	}

	cout << newcand;

	//system("pause");
	return 0;
}
