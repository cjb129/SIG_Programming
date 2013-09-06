#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int children;
	int groupSize;
	vector<int> groups;
	cin >> children;

	for(int i = 0; i < children; i++) {
		cin >> groupSize;
		groups.push_back(groupSize);
	}

	sort(groups.rbegin(), groups.rend());

	int taxi = 0;

	while (!groups.empty()) {
		//for (int i = 0; i < groups.size(); i++) {
		//	cout << groups[i];
		//}
		//cout << endl;
		if(groups[0] == 4) {
			groups.erase(groups.begin());
			taxi++;
		}
		else if(groups[0] == 3) {
			bool found = false;
			for (int i = 0; i < groups.size(); i++) {
				if (groups[i] == 1) {
					groups.erase(groups.begin() + i);
					groups.erase(groups.begin());
					taxi++;
					found = true;
					break;
				}
				
			}
			if (!found) {
				groups.erase(groups.begin());
				taxi++;
			}

		}
		else if(groups[0] == 2) {
			groups.erase(groups.begin());
			if (groups.empty())
				taxi++;
			for (int i = 0; i < groups.size(); i++) {
				if (groups[i] == 2) {
					groups.erase(groups.begin());
					taxi++;
					break;
				}
				else if (groups[i] == 1 && i < groups.size() - 1) {
					groups.erase(groups.begin() + i);
					groups.erase(groups.begin() + i);
					taxi++;
					break;
				}
				else {
					groups.erase(groups.begin());
					taxi++;
					break;
				}
			}
		}
		else {
			int ones = groups.size();
			int grps = (ones + 3) / 4;
			taxi += grps;
			break;
		}
	}
	//cout << groups.size() << endl;
	cout << taxi << endl;
	//system("pause");

	return 0;
}
