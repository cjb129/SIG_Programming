//Helpful Maths, solved 2/8/14
//http://codeforces.com/problemset/problem/339/A

#include<iostream>
#include<vector>
#include<cctype>
#include<algorithm>
#include<string>

using namespace std;

int main() {

    string foo;
    cin >> foo;

    vector<char> nums;

    for(int i = 0; i < foo.size(); i++) {
        if(isdigit(foo[i])) {
            nums.push_back(foo[i]);
        }
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size()-1; i++) {
        cout << nums[i] << "+";
    }

    cout << nums[nums.size()-1];
    //system("pause");
    return 0;
}
