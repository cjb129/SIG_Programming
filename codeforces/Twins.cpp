//Twins, solved 2/8/14
//http://codeforces.com/problemset/problem/160/A

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

    int n;
    int cents;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++) {
        cin >> cents;
        a.push_back(cents);
    }

    sort(a.begin(), a.end());

    int sum = 0;

    for(int i = 0; i < a.size(); i++) {
        sum += a[i];
    }

    int half = sum/2;
    int total = 0;
    int count = 0;

    //cout << sum << " " << half << " " << total << endl;

    while(total <= half) {
        total += a[a.size() - 1];
        a.pop_back();
        count++;
        //cout << sum << " " << half << " " << total << endl;
    }

    cout << count;

    //system("pause");
    return 0;
}
