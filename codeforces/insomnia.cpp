//Insomnia Cure, solved 2/8/14
//http://codeforces.com/problemset/problem/148/A

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int k, l, m, n, d;
    vector<int> list;

    cin >> k >> l >> m >> n >> d;

    for(int i = 1; i <= d; i++) {
        if(k*i <= d) {
            list.push_back(k*i);
        }
        if(i*l <= d) {
            list.push_back(l*i);
        }
        if(i*m <= d) {
            list.push_back(m*i);
        }
        if(i*n <= d) {
            list.push_back(n*i);
        }
    }

    sort(list.begin(), list.end());

    int count = 0;

    
    
    vector<int>::iterator it;
    it = unique(list.begin(), list.end());
    list.resize(std::distance(list.begin(), it) );

    cout << list.size();

    
    return 0;
}
