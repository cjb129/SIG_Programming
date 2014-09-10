//Inbox (100500), solved 9/10/14
//http://codeforces.com/problemset/problem/465/B

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> foo;
	vector<int>::reverse_iterator it;
	int tmp;

	for(int i = 0; i < n; i++)
	{
		cin >> tmp;
		foo.push_back(tmp);
	}

	it = find(foo.rbegin(), foo.rend(), 1);
	foo.erase((it.base()), foo.end());

	foo.push_back(9);
	foo.push_back(9);

	int count = 0;

	for(int i = 0; i < foo.size()-2; i++)
	{
		if(foo[i] == 1)
			count++;
		if(foo[i] == 1 && foo[i+1]==0 && foo[i+2] == 0)
			count++;
		if(foo[i] == 1 && foo[i+1]==0 && foo[i+2] == 1)
			count++;
	}
	cout << count;
}
