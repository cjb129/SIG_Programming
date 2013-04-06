/* 
 * File:   main.cpp
 * Author: cjb129
 *
 * Created on January 25, 2013, 7:15 PM
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>

using namespace std;

/*
 convert Roman numerals to base 10 digits
 */
int main() {
    int numNum;
    string romNum;
    
    
    cin >> numNum;
    for (int i = 0; i < numNum; i++) {
        cin >> romNum;
        int ans = 0;
        for (int c = 0; c < romNum.length(); c++){
            switch(romNum[c])
            {
                case 'I':
                    if (c+1 < romNum.length() && (romNum[c+1] == 'V' || romNum[c+1] == 'X'))
                        ans -= 1;
                    else
                        ans += 1;
                    break;
                case 'V':
                    if (c+1 < romNum.length() && (romNum[c+1] == 'X' || romNum[c+1] == 'L'))
                        ans -= 5;
                    else
                        ans += 5;
                    break;
                case 'X':
                    if (c+1 < romNum.length() && (romNum[c+1] == 'L' || romNum[c+1] == 'C'))
                        ans -= 10;
                    else
                        ans += 10;
                    break;
                case 'L':
                    if (c+1 < romNum.length() && (romNum[c+1] == 'C' || romNum[c+1] == 'D'))
                        ans -= 50;
                    else
                        ans += 50;
                    break;
                case 'C':
                    if (c+1 < romNum.length() && (romNum[c+1] == 'D' || romNum[c+1] == 'M'))
                        ans -= 100;
                    else
                        ans += 100;
                    break;
                case 'D':
                    if (c+1 < romNum.length() && romNum[c+1] == 'M')
                        ans -= 500;
                    else
                        ans += 500;
                    break;
                case 'M':
                        ans += 1000; 
                    break;
            }
        }
        cout << ans << endl;
    }
    
    
    return 0;
}

