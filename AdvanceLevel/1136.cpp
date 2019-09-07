#include <iostream>
#include <string>
using namespace std;
string rev(string s) {
    string tmp;
    for (int i = s.length() - 1; i >= 0; i--) {
        tmp.append(1,s[i]);

    }
    return tmp;
}
/*
string rev(string s) {
    reverse(s.begin(), s.end());
    return s;
}
*/
string add(string s1, string s2) {
    string s = s1;
    int carry = 0;
    for (int i = s1.size() - 1; i >= 0; i--) {
        s[i] = (s1[i] - '0' + s2[i] - '0' + carry) % 10 + '0';
        carry = (s1[i] - '0' + s2[i] - '0' + carry) / 10;
    }
    if(carry > 0) s = "1" + s;
    return s;
}

int main() {
    string s, sum;
    cin >> s;
    if (s == rev(s)) {
        cout << s << " is a palindromic number." << endl;
        return 0;
    } 
    for(int i = 0; i < 10; i++) {
        sum = add(s, rev(s));
        cout << s << " + " << rev(s) << " = " << sum << endl;
        if(sum == rev(sum)){
            cout << sum << " is a palindromic number." << endl;
            return 0;
        }
        s = sum;
    }
    cout << "Not found in 10 iterations." << endl;
    return 0;
}
