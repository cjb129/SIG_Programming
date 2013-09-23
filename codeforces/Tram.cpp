#include <iostream>

using namespace std;

int main() {

	int numStops;
	int enter = 0;
	int exit = 0;
	int capacity = 0;
	int maxCap = 0;

	cin >> numStops;

	for(int i = 0; i<numStops; i++) {
		cin >> exit;
		cin >> enter;

		capacity -= exit;
		capacity += enter;
		if (capacity > maxCap)
			maxCap = capacity;

	}

	cout << maxCap;



	system("pause");
	return 0;
}