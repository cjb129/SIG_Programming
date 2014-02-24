//Is your horseshoe on the other hoof?, solved 2/8/14
//http://codeforces.com/problemset/problem/228/A

#include<iostream>

using namespace std;

int main() {

    int one, two, tre, four;

    cin >> one >> two >> tre >> four;

    int count = 0;

    if (one == two || one == tre || one == four) {
        count++;
    }
    if(two == tre || two == four) {
        count++;
    }
    if(tre == four) {
        count++;
    }

    cout << count;


   // system("pause");
    return 0;
}
