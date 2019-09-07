#include<iostream>
#include<vector>
using namespace std;
int main() {
    int nv, ne, a, b;
    cin >> nv >> ne;
    int g[210][210];
    for (int i = 0; i < ne; i++) {
        cin >> a >> b;
        g[a][b] = g[b][a] = 1;
    }
    int m, k;
    cin >> m;
    for (int i = 0; i < m; i++){
        cin >> k;
        vector<int> v(k);
        int hash[210] = {0}, isclique = 1, isMaximal = 1;
        for (int j = 0; j < k; j++) {
            cin >> v[j];
            //scanf("%d", &v[j]);
            hash[v[j]] = 1;
        }
        for (int j = 0; j < k; j++) {
            if(isclique == 0) break;
            for (int l = j + 1; l < k; l++) {
                if(g[v[j]][v[l]] == 0){
                    isclique = 0;
                    printf("Not a Clique\n");
                    break;
                }
            }
        }
        if (isclique == 0) continue;
        for (int j = 1; j <= nv; j++) {
            if(hash[j] == 0) {
                for(int l = 0; l < k; l++) {
                    if (g[v[l]][j] == 0) break;
                    if (l == k - 1) isMaximal = 0;
                }
            }
            if (isMaximal == 0) {
                printf("Not Maximal\n");
                break;
            }
        }
        if (isMaximal == 1) printf("Yes\n");
    }
    return 0;
}
