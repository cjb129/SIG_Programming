//Double Cola, solved 2/26/14
//http://codeforces.com/problemset/problem/82/A

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {

	string names[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	
	double n;
	cin >> n;

	double m = 0;
	double total = 0;
	double soo = 0;
	int k = 0;

	while(total < n) {
		m = pow(2, k)*5;
		total += m;
		soo = pow(2, k);
		k++;
	}

	double f = total - m;
	f++;

	int count = 0;


	while(f <= n) {
		if(n >= f && n < f+soo) {
			cout << names[count];
			return 0;
		}
		else {
			f += soo;
			count++;
		}
	}


	//system("pause");		
	return 0;
}
