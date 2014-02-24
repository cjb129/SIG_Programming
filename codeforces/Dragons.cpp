//Draongs, solved 6/22/13
//http://codeforces.com/problemset/problem/230/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Dragon {
public:
	Dragon() {};
	int dstr;
	int bonus;
	//int dstr, bonus;
};

bool cmp (Dragon l, Dragon r) {
	return l.dstr < r.dstr;
}

int main() {

	int str = 0;
	int dragons;
	cin >> str >> dragons;

	vector<Dragon> cases;
	

	for (int i = 0; i < dragons; i++) {
		Dragon *a = new Dragon;
		cin >> a->dstr;
		cin >> a->bonus;

		cases.push_back(*a);
	}

	sort(cases.begin(), cases.end(), &cmp);
	
	
	for (int i = 0; i < dragons; i++) {
		if (str > cases[i].dstr) {
			str = str + cases[i].bonus;
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";

	//system("pause");
	return 0;
}
