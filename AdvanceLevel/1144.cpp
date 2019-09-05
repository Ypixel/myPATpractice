#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int main() {
    int n, a, num = 0;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> a;
        m[a]++;
    }
    while(++num)
        if (m[num] == 0) break;
    cout << num;
    return 0;
}












// int main() {
//     int n;
//     cin >> n;
//     // scanf("%d", &n);
//     set<int> s;
//     int t, tmp;
//     for(int i = 0; i < n; i++) {
//         cin >> tmp;
//         t = tmp;
//      //   scanf("%d", &t);
//         s.insert(t);
//     }
//     int j = *(s.begin());
//     cout << *(s.begin());
//     for(auto it = s.begin(); it != s.end(); it++){
//         cout << *it;
//         if(*it > 0 && ((*it + 1) != *(++it)))
//                 cout << *(++it);
//     }
// }

