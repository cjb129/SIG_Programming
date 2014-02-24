//Watermelon, solved 4/6/13
//http://codeforces.com/problemset/problem/4/A

#include<iostream>

using namespace std;

int main() {
    
    int watermelon;
    cin >> watermelon;
    if (watermelon % 2 == 0 && watermelon != 2)
        cout << "YES";
    else
        cout << "NO";
}
