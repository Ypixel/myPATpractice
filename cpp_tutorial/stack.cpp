#include <iostream>
#include <stack>
using namespace std;
int main() {
	stack<int> s;
	for (int i = 0; i < 6; i++) {
		s.push(i);
	}
	cout << s.top() << endl;
	cout << s.size() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << s.size() << endl;
	while (!s.empty()) {
		cout << s.top() << " " ;
		s.pop();
	}
	cout << endl;
	return 0;
}

