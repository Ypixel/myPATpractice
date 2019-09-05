#include <iostream>
using namespace std;
long f(long n) {
    if(n == 1)
        return n;
    else
        return n * f(n - 1);
}
int main() {
    long n;
    cout << "input factorial number: ";
    cin >> n;
    cout << "output: " << f(n) << endl;
    return 0;
}
