#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) cin >> v[i];
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            vector<int> liar;
            vector<int> a(n + 1, 1);
            a[i] = -1;
            a[j] = -1;
            for (int k = 1; k <= n; k++) {
                if (v[k] * a[abs(v[k])] < 0) liar.push_back(k);
            }
            if (liar.size() == 2 && a[liar[0]] + a[liar[1]] == 0) {
                cout << i << " " << j << endl;
                return 0;
            }
        }
    }
    cout << "No Solution" << endl;
    return 0;
}
