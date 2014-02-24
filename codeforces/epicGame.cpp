//Epic Game, solved 2/8/14
//http://codeforces.com/problemset/problem/119/A

#include<iostream>

using namespace std;

int gcd(int a, int b) {
    int c = a % b;

    while(c != 0) {
        a = b;
        b = c;
        c = a % b;
    }

    return b;

}

int main() {
    int x, y, z;
    int Simon = 0;
    int Ant = 0;
    int heap = 0;

    cin >> x >> y >> z;

    while(true) {
        z -= gcd(x, z);
        //cout << z << endl;
        if(z <= 0) {
            cout << "0";
            break;
        }
        z -= gcd(y, z);
        //cout << z << endl;
        if(z <= 0) {
            cout<< "1";
            break;
        }
    }

    //system("pause");
    return 0;
}
