//Fancy Fence, solved 9/12/14
//http://codeforces.com/problemset/problem/270/A

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> foo;
	int tmp;
	for(int i = 0; i < n; i++)
	{
		cin >> tmp;
		if(360%(180-tmp)==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	
	
	return 0;	
}
