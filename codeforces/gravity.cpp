//Gravity Flip, solved 9/12/14
//http://codeforces.com/problemset/problem/405/A

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int tmp;
	vector<int> foo;

	for(int i = 0; i < n; i++)
	{
		cin >> tmp;
		foo.push_back(tmp);
	}

	sort(foo.begin(), foo.end());

	for(int i = 0; i < n; i++)
	{
		cout << foo[i] << " ";
	}
}
