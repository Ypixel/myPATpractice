#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    int n, k, t1, t2;
    map<int, vector<int>> m;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> t1 >> t2;
        m[t1].push_back(t2);
        m[t2].push_back(t1);
    }
    while(k--) {
        int cnt, flag = 0, a[100000] = {0};
        cin >> cnt;
        vector<int> v(cnt);
        for (int i = 0; i < cnt; i++) {
            cin >> v[i];
            a[v[i]] = 1;
        }
        for (int i = 0; i < v.size(); i++)
            for (int j = 0; j < m[v[i]].size(); j++)
                if (a[m[v[i]][j]] == 1) flag = 1;
        cout << (flag ? "No" : "Yes") << endl;
    }
    return 0;

}





/* -----------------------trash lie------------------*/
/*struct boom {
    int g1;
    int g2;
};
int main() {
    int n, m;
    cin >> n >> m;
    vector<boom> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i].g1 >> v[i].g2;
    for (int i = 0; i < m; i++) {
        int k;
        cin >> k;
        vector<int> list(k);
        for (int j = 0; j < k; j++)  cin >> list[i];
        
        for (int j = 0; j < k; j++){
            for (int t = 0; t < n; t++){
                if (list[j] == v[t].g1 || list[j] == v[t].g2){
                    for (int l = 0; l < k; l++) {
                        if (list[l] == v[t].g1 || list[l] == v[t].g2){
                            cout << "No" << endl;
                        }
                    }
                }
            }
        }
        cout << "yes" << endl;
    }
    return 0;
}*/
