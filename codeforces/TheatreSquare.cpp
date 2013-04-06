/*
 Theatre square is n x m. It is to re-paved with a x a stones.
 How many stones does it take to re-pave theatre square?
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long double n, m;
    long double a;
    long double square;
    long double vert = 0;
    long double hor = 0;
   
    cin >> n >> m >> a;
    square = n * m;
    long double stone = a * a;
    
    if (square <= stone) {
        cout << "1" << endl;
        return 0;
    }
   
    else {
        vert = ceil(n / a);
        hor = ceil(m / a);
        long double paveArea = (vert * a) * (hor * a);
     // cout << paveArea << " " << stone << " ";
        cout << fixed << (long long)(paveArea / stone);
        return 0;
    }
    
    return 0;
}
