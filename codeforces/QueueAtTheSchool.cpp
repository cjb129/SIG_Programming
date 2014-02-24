//Queue At The School, solved 2/12/14
//http://codeforces.com/problemset/problem/266/B

#include<iostream>
#include<string>

using namespace std;

int main() {

    int n;
    cin >> n;
    int t;
    cin >> t;

    string s;
    cin >> s;

    for(int i = 0; i < t; i++) {
        for(int j = 0; j < s.size(); j+=1) {
            if(s[j] == 'B' && s[j+1] == 'G') {
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
    }

    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
    }


    //system("pause");
    return 0;
}
