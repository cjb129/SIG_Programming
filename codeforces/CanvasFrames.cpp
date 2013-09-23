//Canvas Frames problem from Codeforces
//http://codeforces.com/problemset/problem/127/B

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int sticks;
	cin >> sticks;

	vector<int> sizeAr;
	int sizes;
	for (int i = 0; i < sticks; i++){
		cin >> sizes;
		sizeAr.push_back(sizes);
	}

	bool swap;
	int temp;

	do {
		swap = false;
		for (int i = 0; i < sizeAr.size() - 1; i++) {
			if (sizeAr[i] > sizeAr[i + 1]) {
				temp = sizeAr[i];
				sizeAr[i] = sizeAr[i + 1];
				sizeAr[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);

	//for(int i = 0; i < sizeAr.size(); i++) {
	//	cout << sizeAr[i] << " ";
	//}
	
	int count = 0;
	while(sizeAr.size() > 1){
		if (sizeAr[sizeAr.size() - 1] == sizeAr[sizeAr.size() - 2]) {
			sizeAr.pop_back();
			sizeAr.pop_back();
			count++;
		}
		else
			sizeAr.pop_back();
	}
	//cout << count << endl;
	if (count > 1) {
		if (count % 2 == 0)
			cout << count / 2;
		else {
			count = count - 1;
			cout << count / 2;
		}
	}
	else
		cout << 0;

	//system("pause");
	return 0;
}
