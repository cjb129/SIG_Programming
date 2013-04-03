#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void correct();
void wrong(int);

int main() {
srand(time(0));
int x, y, z, ans, input;
int total = 0;
int NUMPROB;


cout << "Select number of problems: ";
cin >> NUMPROB;

	for(int i = 0; i < NUMPROB; i++) {
		z = rand() % 4 + 1;
		switch (z) {
			case 1:
				cout << i + 1 << ": ";
				x = rand() % 101;
				y = rand() % 101;
				ans = x + y;
				cout << x << " + " << y << " = ";
				cin >> input;
				if (input == ans) {
					correct();
					total = total + 1;
				}
				else {
					//cout << "Sorry, that's incorrect" << endl;
					//cout << "The correct answer was: " << ans << endl << endl;
					wrong(ans);
				}
				break;

			case 2:
				cout << i + 1 << ": ";
				x = rand() % 51 + 50;
				y = rand() % 50;
				ans = x - y;
				cout << x << " - " << y << " = ";
				cin >> input;
				if (input == ans) {
					//cout << "Good job, little bro! You got it right!" << endl << endl;
					correct();
					total = total + 1;
				}
				else {
					wrong(ans);
					//cout << "Sorry, that's incorrect" << endl;
					//cout << "The correct answer was: " << ans << endl << endl;
				}
				break;
			case 3:
				cout << i + 1 << ": ";
				x = rand() % 13;
				y = rand() % 13;
				ans = x * y;
				cout << x << " x " << y << " = ";
				cin >> input;
				if (input == ans ) {
					correct();
					//cout << "Good job, little bro! You got it right!" << endl << endl;
					total = total + 1;
				}
				else {
					wrong(ans);
					//cout << "Sorry, that's incorrect" << endl;
					//cout << "The correct answer was: " << ans << endl << endl;
				}
				break;
		  	case 4:
				cout << i + 1 << ": ";
				x = rand() % 13 + 1;
				y = rand() % 13 + 1;
				z = x * y;
				ans = z / y;
				cout << z << " / " << y << " = ";
				cin >> input;
				if (input == ans) {
					correct();
					//cout << "Good job, little bro!" << endl << endl;
					total = total + 1;
				}
				else {
					wrong(ans);
					//cout << "Sorry, that's incorrect" << endl;
					//cout << "The correct answer was: " << ans << endl;
				}
				break;

		}
	}
	cout << endl << "You got " << total << " out of " << NUMPROB << " correct!" << endl << endl;
}

void correct() {
	cout << "Good job, little bro! You got it right!" << endl << endl;
}

void wrong(int answer) {
	cout << "Sorry, that's incorrect" << endl;
	cout << "The correct answer was: " << answer << endl << endl;
}
