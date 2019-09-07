#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <unordered_map>
using namespace std;
struct sc{
    string school;
    int tws;
    int ns;
};
bool cmp(sc a, sc b){
    if (a.tws != b.tws)
        return a.tws > b.tws;
    else if(a.ns != b.ns)
        return a.ns < b.ns;
    else
        return a.school < b.school;
}
int main(){
    int n;
    cin >> n;
    unordered_map<string, int> cnt;
    unordered_map<string, double>sum;
    for (int i = 0; i < n; i++) {
        string id, school;
        cin >> id;
        double score;
        cin >> score;
        cin >> school;
        for (int j = 0; j < school.length(); j++)
            school[j] = tolower(school[j]);
        if (id[0] == 'B') score = score / 1.5;
        else if (id[0] == 'T') score = score * 1.5;
        sum[school] += score;
        cnt[school]++;
    }
    vector<sc> ans;
    for (auto it = cnt.begin(); it != cnt.end(); it++)
        ans.push_back(sc{it->first, (int)sum[it->first], cnt[it->first]});
    sort(ans.begin(), ans.end(), cmp );
    int rank = 0, pres = -1;
    printf("%d\n", (int)cnt.size());
    for (int i = 0; i < cnt.size(); i++) {
        if (pres != ans[i].tws) rank = i + 1;
        pres = ans[i].tws;
        printf("%d ",rank);
        cout << ans[i].school;
        printf(" %d %d\n", ans[i].tws, ans[i].ns);
    }
    return 0;
}
