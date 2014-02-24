//Bit++, solved 12/31/13
//http://codeforces.com/problemset/problem/282/A

#include<iostream>
#include<string>

using namespace std;

int main(){

    int n;
    string x;
    int ans = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        
        if(x == "++X" || x == "X++") {
            ans++;
        }
        else
            ans--;
    }
    cout << ans;

    return 0;
}
