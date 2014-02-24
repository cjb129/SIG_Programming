//Ultra Fast Mathemitician, solved 2/22/14
//http://codeforces.com/problemset/problem/61/A

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

    string n, m;

    cin >> n >> m;
    vector<int> foo;

    for(int i = 0; i < n.length(); i++) {
        if(n[i] == m[i]) {
            foo.push_back(0);
        }
        else {
            foo.push_back(1);
        }
    }

    for(int i = 0; i < foo.size(); i++) {
        cout << foo[i];
    }


    //system("pause");
    return 0;
}
