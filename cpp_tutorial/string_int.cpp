#include <iostream>
#include <string>
using namespace std;
int main() {
	string str = "123.33";
	int a = stoi(str);
	cout << a << endl;
	str = "123.44";
	double b = stod(str);
	cout << b << endl;
    cout << "---------" << endl;
    string s = "97152";
    cout << typeid(s[4] - '0') << endl;
    cout << s[4] - '0' << endl;
	return 0;	
}
