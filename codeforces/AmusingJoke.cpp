//Amusing joke from Codeforces
//http://codeforces.com/problemset/problem/141/A


#include <iostream>
#include <string>

using namespace std;

string sortArray (string ar, int size) {
	bool swap;
	char temp;
	
	do {
		swap = false;
		for (int i = 0; i < (size-1); i++) {
			if (ar[i] > ar[i+1]) {
				temp = ar[i];
				ar[i]=ar[i+1];
				ar[i+1]=temp;
				swap = true;
			}
		}
	}while (swap);
	return ar;
}

int main() {

	string A;
	cin >> A;
	string B;
	cin >> B;
	string C;
	cin >> C;

	string newS = A.append(B);
	

	string sortedC = sortArray(C, C.length());
	string sortedNew = sortArray(newS, newS.length());


	 
	if (sortedNew == sortedC)
		cout << "YES";
	else
		cout << "NO";



	//system("pause");
	return 0;
}
