#include <iostream>
#include <bitset>
using namespace std;
int main() {
	bitset<5> b("11");
	//bitset<5> b;
	//bitset<5> b(1);
	//bitset<8> b("1101");
	//bitset<5> b("10011101",0,5);
	cout << b << endl;
	for(int i = 0; i < 5; i++)
		cout << b[4 - i];
	cout << endl << b.any();
	cout << endl << b.none();
	cout << endl << b.count();
	cout << endl << b.size();
	cout << endl << b.test(0);
	b.set(4);
	cout << endl << b;
	b.reset();
	cout << endl << b;
	b.reset(3);
	cout << endl << b;
	b.flip();
	cout << endl << b;

	unsigned long a = b.to_ulong();
	cout << endl << b;
	return 0;

}

