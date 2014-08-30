#include<iostream>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int z = min(n, m);

	if(z%2==0) cout << "Malvika";
	else cout << "Akshat";

	return 0;
}
