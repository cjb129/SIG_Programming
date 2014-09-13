//The number of positions, solved 9/12/14
//http://codeforces.com/problemset/problem/124/A

#include<iostream>

using namespace std;

int main()
{
	int total;
	int front;
	int back;
	
	cin >> total >> front >> back;

	int count = 0;

	count = total - front;

	if(count <= back)
		cout << count;
	else
		cout << ++back;

}
