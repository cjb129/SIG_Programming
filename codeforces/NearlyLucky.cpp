#include <iostream>
#include <string>

using namespace std;

int main() {

	

	string num;
	cin >> num;

	char lucky = 0;

	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '4' || num[i] == '7')
			lucky++;
	}

	if (lucky == 4 || lucky == 7)
		cout << "YES";
	else
		cout << "NO";


	//system("pause");
}