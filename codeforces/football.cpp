//Football, solved 1/25/14
//http://codeforces.com/problemset/problem/96/A

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {
    string n;
    cin >> n;

    string str1 = "0000000";
    string str0 = "1111111";

    if(n.find(str1) != string::npos) {
        cout << "YES";
        return 0;
    }
    if(n.find(str0) != string::npos) {
        cout << "YES";
        return 0;
    }

    cout << "NO";

    //system("pause");
    
    return 0;
}
