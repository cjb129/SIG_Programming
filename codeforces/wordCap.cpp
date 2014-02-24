//Word Capitalization, solved 2/8/14
//http://codeforces.com/problemset/problem/281/A

#include<iostream>
#include<cctype>
#include<string>

using namespace std;

int main() {
    string foo;

    cin >> foo;

    foo[0] = toupper(foo[0]);

    cout << foo;

   // system("pause");


    return 0;
}
