#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(int a, int b) {
	return a > b;
}
int main() {
	vector<int> v(10);
	for (int i = 0; i < 10; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << *it << " " ;
	}
	cout << endl;
	
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + 10, cmp);
	for (int i =0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

