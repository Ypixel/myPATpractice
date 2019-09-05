#include <iostream>
#include <vector>
using namespace std;
int m, n, flag;
vector<int> v;
void postorder(int index) {
    if (index > n) return;
        postorder(index * 2);
        postorder(index * 2 + 1);
        printf("%s%d", flag == 1 ? "":" " , v[index]);
        flag = 0;
}
int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        flag = 1;
        v.resize(n+1, 0);
        int isMax = 1,isMin = 1;
        for (int j = 1; j <= n; j++){
            cin >> v[j];
        }
        for(int k = 2; k <= n; k++) {
            if (v[k/2] > v[k]) isMin = 0;
            if (v[k/2] < v[k]) isMax = 0;
        }
        if (isMin == 1){
            cout << "Min Heap" << endl;
        }
        else if (isMax == 1 && isMin == 0) {
            cout << "Max Heap" << endl;
        }
        else {
            cout << "Not Heap" << endl;
        }
        postorder(1);
        cout << endl;

    }
    return 0;
}
// exceting , this is the first problem I ever solved ,independently!
