#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	vector<int> puzzles;
	int n, m, pieces = 0;
	cin >> n >> m;
	
	for(int i = 0; i < m; i++)
	{
		cin >> pieces;
		puzzles.push_back(pieces);
	}
	sort(puzzles.begin(), puzzles.end());
	int min = 1001;
	int tmp = 0;
	for(int i = 0; i <= m-n; i++)
	{
		tmp = puzzles[i+n-1]-puzzles[i];
		if(tmp < min)
			min = tmp;
	}
	cout << min;
	
	
	return 0;
}