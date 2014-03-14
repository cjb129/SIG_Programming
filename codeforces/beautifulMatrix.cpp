//Beautful Matrix, solved 3/14/14
//http://codeforces.com/problemset/problem/263/A

#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int ar[5][5];

	int nums;

	int eye, jay;

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			cin >> nums;
			if(nums == 1) {
				eye = i+1;
				jay = j+1;
			}
		}
	}


	jay = abs(jay-3);
	eye = abs(eye-3);

	int foo = jay + eye;

	cout << foo;



	//system("pause");
	return 0;
}
