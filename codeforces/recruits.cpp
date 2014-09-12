//Police Recruits, solved 9/12/14
//http://codeforces.com/problemset/problem/427/A

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int tmp;
	int crimeCount = 0;
	int recCount = 0;
	vector<int> foo;
	for(int i = 0; i < n; i++)
	{
		cin >> tmp;
		foo.push_back(tmp);
	}
	
	for(int i = 0; i < n; i++)
	{
		if(foo[i] < 0)
			crimeCount++;
		if(foo[i] > 0)
			recCount+= foo[i];
		if(recCount > 0 && foo[i] < 0){
			recCount--;
			crimeCount--;
		}
	}
	cout << crimeCount;
	
}

