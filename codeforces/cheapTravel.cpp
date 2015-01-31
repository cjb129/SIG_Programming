//Cheap Travle, solved 1/31/15
//http://codeforces.com/problemset/problem/466/A

#include<iostream>
using namespace std;
int main() {
	int n, m, a, b, total=0;
	cin >> n >> m >> a >> b;
	
	int allOne = n * a;
	int allM = (n/m * b);
	if(n%m != 0) allM += b;

	int someM = allM - b;
	int f = n - m*(n/m);
	if(f==0) someM = allM;
	while(f > 0) {
		f--;
		someM+=a;
	}
	
	total = min(allOne, min(allM, someM));

	if(m > n && allOne > b)
		total = b;

	cout << total << endl;
}
