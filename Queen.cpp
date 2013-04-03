
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


int main() {
    
    int x1, y1, x2, y2;
    while (true) {
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
            return 0;
        int xmove = abs(x1 - x2);
        int ymove = abs(y1 - y2);
        int moves = 0;
        if (x1 == x2 && y1 == y2)
            cout << "0" << endl;
        else if (xmove == ymove || xmove == 0 || ymove == 0)
            cout << "1" << endl;
        
        
        else
            cout << "2" << endl;
    
                    
    }                
    return 0;
}

