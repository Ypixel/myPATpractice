#include <iostream>
using namespace std;
int fib(int n) {
    return n <= 1 ? n : fib(n - 1) + fib(n - 2);
}
int main() {
    for ( int i = 0; i < 40; i++ )
        cout << fib(i) << endl;
    return 0;
}
