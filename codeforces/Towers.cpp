//Towers, solved 2/17/14
//http://codeforces.com/problemset/problem/37/A

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main() {

    int bars, nums;
    cin >> bars;

    vector<int> towers;
    
    for (int i = 0; i < 1001; i++) {
        towers.push_back(0);
    }
    
    int count = 0;

    for (int i = 0; i < bars; i++) {
        cin >> nums;
        towers[nums]++;
        
    }

    int max = 0;

    for (int i = 0; i < towers.size(); i++) {
        if(max < towers[i]) {
            max = towers[i];
        }
        if(towers[i] != 0) {
            count++;
        }
    }

    cout << max << " " << count;
    

    //system("pause");
    return 0;
}
