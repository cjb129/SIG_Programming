//Arrival of the General, solved 2/12/14
//http://codeforces.com/problemset/problem/144/A

#include<iostream>
#include<vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> list;
    int c;

    for(int i = 0; i < n; i++) {
        cin >> c;
        list.push_back(c);
    }

    int min = 101;
    int max = 0;
    int minpos = 0;
    int maxpos = 0;

    for(int i = 0; i < list.size(); i++) {
        if(list[i] > max) {
            max = list[i];
            maxpos = i;
            //cout << max << " " << maxpos;
        }

        if(list[i] <= min) {
            min = list[i];
            minpos = i;
            //cout << min << " " << minpos;
        }
        //cout << "first loop";
    }

    int mindist = list.size() - minpos - 1;
    int maxdist = 0 + maxpos;

    if(maxpos > minpos)
        cout << mindist + maxdist - 1;
    else
        cout << mindist + maxdist;

    //system("pause");
    return 0;
}
