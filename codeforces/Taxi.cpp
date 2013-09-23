//Taxi problem from Codeforces
//http://codeforces.com/problemset/problem/158/B

#include <iostream>
#include <vector>

using namespace std;

int main() {

	int one = 0, two = 0, three = 0, four = 0;
	int taxi = 0;
	int groups;
	cin >> groups;
	int grpsize;
	vector<int> nums;

	for(int i = 0; i < groups; i++) {
		cin >> grpsize;
		nums.push_back(grpsize);
		if(nums[i] == 1)
			one++;
		else if (nums[i] == 2)
			two++;
		else if (nums[i] == 3)
			three++;
		else
			taxi++;
	}
	
	 do {
		if (three >= 1 && one >= 1) {
					three--;
					one--;
					taxi++;
		}
		else if (three >= 1 && one == 0) {
					three--;
					taxi++;
		}
		else if (two % 2 == 0 && two != 0) {
			two -= 2;
			taxi++;
		}
		else if(two >= 1 && one >= 2) {
			one -= 2;
			two--;
			taxi++;
		}
		else if (two >= 1 && one == 1) {
			one--;
			two--;
			taxi++;
		}
		else if (two >= 1 && one == 0) {
			two--;
			taxi++;
		}
		else {
			taxi += (one + 3) / 4;
			break;
		} 
		
	}while(one || two || three);

	//cout << one << " " << two << " " << three << " " << four << " taxi: " << taxi << endl;
	cout << taxi;

	//system("pause");

	return 0;
}
