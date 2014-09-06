#include<iostream>

using namespace std;

int main()
{
	int award[6];
	int copa[3];
	int med[3];
	int n;
	int tmp, tmp0;
	for(int i = 0; i < 6; i++)
	{
		cin >> tmp;
		award[i] = tmp;
	}
	cin >> n;

	int cup = 0;
	int medal = 0;
	for(int i = 0; i < 3; i++)
	{
		cup += award[i];
		medal += award[i+3];
	}

	while(cup > 4)
	{
		cup-=5;
		n--;
	}
	while(medal > 9)
	{
		medal-=10;
		n--;
	}

//	cout << n << "\n" << "cup: " << cup << "medal: " << medal << "\n";

	bool flag = false;
	if (cup > 0 && medal > 0 && n < 2)
		flag = true;

//	cout << flag << "\n";
	if(n <= 0||flag) cout << "NO";
	else cout << "YES";
}
