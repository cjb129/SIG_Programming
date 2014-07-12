#include <iostream>
#include <string>

using namespace std;

void findAndReplace(string &str, const string wub, const string sp)
{
	size_t pos = 0;
	while((pos = str.find(wub, pos)) != string::npos)
	{
		str.replace(pos, wub.length(), sp);
		pos += sp.length();
	}
}

int main()
{
	string str;
	cin >> str;
	string sp = " ";
	string wub = "WUB";
	findAndReplace(str, wub, sp);
	cout << str;
	return 0;
}