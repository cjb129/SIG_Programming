//Way Too Long Words, solved 7/20/13
//http://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>

using namespace std;

int main() {

    int numWrd;
    cin >> numWrd;

    string word;
    for (int i = 0; i < numWrd; i++) {
        cin >> word;
        if (word.size() > 10) {
            cout << word[0] << word.size() - 2 << word[word.size()-1] << endl;
        }
        else
            cout << word << endl;
    }

    //system("pause");


    return 0;
}
