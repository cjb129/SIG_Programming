/* 
 * File:   main.cpp
 * Author: cjb129
 *
 * Created on January 25, 2013, 9:25 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main() {

    int sets;
    int numImg;
    int sqIn;
    int fullSet;
    int A = 36*36;
    int B = 36*36*2;
    int C = 36*36*3;
    int total = 0;
    
    cin >> sets;
    for (int i = 0; i < sets; i++) {
        cin >> numImg;
        for (int a = 0; a < numImg; a++) {
            cin >> sqIn;
            cin >> fullSet;
            total += sqIn * fullSet;
            
        }
        cout << A/total << " " << B/total << " " << C/total << endl;
    }
    return 0;
}

