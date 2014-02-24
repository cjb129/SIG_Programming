//Stones on the Table, solved 1/31/13
//http://codeforces.com/problemset/problem/266/A

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {

    int n;
    char s[51];
    int count = 0;

    cin >> n;

    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == s[i+1]) {
            count++;
        }
    }

    cout << count;

    return 0;
}
