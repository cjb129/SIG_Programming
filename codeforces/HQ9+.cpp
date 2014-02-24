//HQ9+, solved 1/25/14
//http://codeforces.com/problemset/problem/133/A

#include<iostream>
#include<string>

using namespace std;

int main() {
    string n;

    cin >> n;

    if(n.find('H') != string::npos) {
        cout << "YES";
        return 0;
    }
    if(n.find('Q') != string::npos) {
        cout << "YES";
        return 0;
    }
    if(n.find('9') != string::npos) {
        cout << "YES";
        return 0;
    }

    cout << "NO";
    return 0;
}
