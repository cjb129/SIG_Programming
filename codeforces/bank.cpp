//Ilya and Bank Account, solved 9/5/14
//http://codeforces.com/problemset/problem/313/A

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int size = n.size();


	if(n[0] == '-'){
		if(n[size-1] > n[size-2])
		{
			n.erase(size-1);
		}
		else
		{
			n.erase(size-2, 1);
			if(n == "-0")
				n = "0";
		}

		cout << n;
		return 0;
	}
	else
		cout << n;

	
}
