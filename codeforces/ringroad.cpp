//Xenia and Ringroad, solved 9/10/14
//http://codeforces.com/problemset/problem/339/B

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n;
	cin >> m;
	vector<int>foo;
	int tmp;
	long long count = 0;

	for(int i = 0; i < m; i++)
	{
		cin >> tmp;
		foo.push_back(tmp);
	}
	count += foo[0] - 1;
	//cout << "fi: " << count << "\n";

	for(int i = 1; i < m; i++)
	{
		if(foo[i-1] < foo[i]){
			count += foo[i] - foo[i-1];
			//cout << "1: ";
		}
		else if (foo[i-1] > foo[i]){
			count += (n-foo[i-1]) + foo[i];
			//cout << "2: ";
		}
		else{
			count+=0;
			//cout << "3: ";
		}
		//cout << count << "\n";
	}

	cout << count;


	return 0;
}
