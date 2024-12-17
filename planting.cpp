#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("planting.in","r",stdin);
    freopen("planting.out","w",stdout);
    int N;
    cin >> N;

    vector<vector<int>> T(N);
    for (int i = 0; i < N - 1; i++) {
        int x, y;
        cin >> x >> y;
        T[x - 1].push_back(y - 1);
        T[y - 1].push_back(x - 1);
    }

    int res = 0;
    for (int e = 0; e < N; e++) {
        int d = T[e].size(); 
        res = max(res, d);
    }

    cout << res+1 << endl;
    return 0;
}
