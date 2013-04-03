#include<iostream>

using namespace std;

int main() {
	for(int i = 0; i < 10; i++){
		for(int c = 0; c <= i; c++){
			cout << "*";
		}
		cout << endl;
	}

	for(int i = 0; i < 10; i++){
		for(int c = 10; c > i; c--){
			cout << "*";
		}
		cout << endl;
	}
}
