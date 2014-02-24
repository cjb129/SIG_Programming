//Petya and Strings, solved 1/25/14
//http://codeforces.com/problemset/problem/112/A

#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string>

using namespace std;

int main() {
    string a, b;
    char c, d;

    cin >> a >> b;

    for(int i = 0; i < a.length(); i++) {
        c = a[i];
        d = b[i];

        c = tolower(c);
        d = tolower(d);

        //cout << c << " " << d;
        if(c > d) {
            cout << "1";
            //system("pause");
            return 0;
        }
        else if (c < d) {
            cout << "-1";
            //system("pause");
            return 0;
        }

    }
    cout << "0";
    //system("pause");

    return 0;
}
