//Anton and Letters, solved 9/12/14
//http://codeforces.com/problemset/problem/443/A

#include<iostream>
#include<set>
#include<cctype>
#include<string>

using namespace std;

int main()
{
	string in;
	getline(cin, in);
	int count = 0;

	set<char> foo;

	for(int i = 0; i < in.length(); i++)
	{
		if(isalpha(in[i]))
		{
			foo.insert(in[i]);	
		}
	}
	cout << foo.size();
}
