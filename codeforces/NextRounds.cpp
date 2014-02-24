//Next Round, solved 7/20/14
//http://codeforces.com/problemset/problem/158/A

#include<iostream>
#include <vector>

using namespace std;

int main() {

    int n, k, tmp; 
    int count = 0;

    cin >> n >> k;

    vector<int> scores;

    for (int i = 0; i < n; i++) {
        cin >> tmp;
        scores.push_back(tmp);
    }
    for (int i = 0; i < n; i++) {
        if (scores[i] >= scores[k-1] && scores[i] > 0)
            count++;
    }

    cout << count;

    //system("pause");

    return 0;
}
