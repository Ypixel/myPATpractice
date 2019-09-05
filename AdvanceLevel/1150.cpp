#include <iostream>
#include <vector>
#include <set>
using namespace std;
int e[300][300], n, m, k, ans = 999999999, ansid;
vector<int> v;
void check(int index) {
    int sum = 0, cnt, flag = 1;
    cin >> cnt;
    set<int> s;
    vector<int> v(cnt);
    for (int i = 0; i < cnt; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }
    for (int i = 0; i < cnt -1; i++) {
        if(e[v[i]][v[i+1]] == 0) flag = 0;
        sum += e[v[i]][v[i+1]];
    }
    if (flag == 0) {
        cout << "Path " << index << ": NA (Not a TS cycle)" << endl;
    } else if (v[0] != v[cnt - 1] || s.size() != n) {
        cout << "Path " << index << ": " << sum << " (Not a TS cycle)" << endl;
    } else if(cnt != n + 1) {
        cout << "Path " << index << ": " << sum << " (TS cycle)" << endl;
        if (sum < ans) {
            ans = sum;
            ansid = index;
        }
    }else {
        cout << "Path " << index << ": " << sum << " (TS simple cycle)" <<endl;
        if (sum < ans) {
            ans = sum;
            ansid = index;
        }
    }
}
int main() {
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int t1, t2, t;
        cin >> t1 >> t2 >> t;
        e[t1][t2] = e[t2][t1] = t;
    } 
    cin >> k;
    for (int i = 1; i <= k; i++) check(i);
    cout << "Shortest Dist(" << ansid << ") = " << ans << endl;
    return 0;
}
