//Candy Bags, solved 9/8/14
//http://codeforces.com/problemset/problem/334/A

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int sq = n * n;
	vector<int> foo;
	
	for(int i = 1; i <= sq; i++)
	{
	
		foo.push_back(i);
	}
	
	int front = 0, back = sq-1;
for(int j = 0; j < n; j++)
{
	for(int i = 0; i < n/2; i++)
	{
		cout << foo[front] << " " << foo[back] << " ";
		front++;
		back--;
	}
	cout << "\n";
}
}
