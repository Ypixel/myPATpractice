#include <cctype>
#include <iostream>
using namespace std;
int main() {
	char c;
	cin >> c;
/*	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
 *		cout << "c is alpha";
 *		}
 */
	if (isalpha(c)) {
		cout << "c is alpha";
	}
	char z = 'A';
	char a = tolower(c);
	cout << a;
	return 0;
}

