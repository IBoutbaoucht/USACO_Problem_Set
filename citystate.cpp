#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("citystate.in", "r", stdin);
    freopen("citystate.out", "w", stdout);
    
    map<pair<string, string>, int> freq;
    int n;
    cin >> n;

    string city, state;
    while (n--) {
        cin >> city >> state;
        string prefix = city.substr(0, 2); 
        if ( prefix != state ) {freq[{prefix, state}]++;}        
    }

    int res = 0;
    for (auto entry : freq) {
        string prefix = entry.first.first ;
        string state = entry.first.second ;
        int count = entry.second ;
        if ( state != prefix ) res += count * freq[{state, prefix}];
    }

    cout << res/2 << endl;

    return 0;
}
