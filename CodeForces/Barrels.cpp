#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.rbegin(), a.rend());
        
        ll r = 0;
        if (k != 0) {
            for (int j = 0; j < min(k+1, n); j++) {
                r += a[j];
            }
        } else {
            r = a[0] - a[n-1];
        }
        
        cout << r << endl;
    }
    
    return 0;
}

