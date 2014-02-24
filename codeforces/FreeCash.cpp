//Free Cash, solved 2/22/14
//http://codeforces.com/problemset/problem/237/A
#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    int hours, minutes;

    vector<int> h;
    vector<int> m;
    int cash = 0;
    int count = 0;
    int max = 0;

    for(int i = 0; i < n; i++) {
        cin >> hours >> minutes;
        h.push_back(hours);
        m.push_back(minutes);
    }
    
    for(int i = 0; i < h.size()-1; i++) {
        if(h[i]==h[i+1] && m[i] == m[i+1]) {
            cash += 1;
        }
        if(cash > max) {
            max = cash;
        }
        if(h[i]!=h[i+1] || m[i] != m[i+1]) {
            cash = 0;
        }

    }
    

    cout << max + 1;


    //system("pause");
    return 0;
}
