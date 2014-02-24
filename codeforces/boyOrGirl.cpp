//Boy or Girl, solved 2/8/14
//http://codeforces.com/problemset/problem/236/A

#include<string>
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    string name;
    cin>>name;

    vector<int> truname;

    for(int i = 0; i < name.length(); i++) {
        truname.push_back(name[i]-'0');
    }
    sort(truname.begin(), truname.end());

    vector<int>::iterator it = unique(truname.begin(), truname.end());
    truname.resize(std::distance(truname.begin(), it));

    if(truname.size() % 2 != 0) {
        cout<<"IGNORE HIM!";
    }
    else
        cout<<"CHAT WITH HER!";

    //system("pause");
    return 0;
}
