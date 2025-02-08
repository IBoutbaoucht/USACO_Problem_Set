#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> weights(2 * n);

    for (int i = 0; i < 2 * n; i++) {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());

    int min_instability = INT_MAX;

    for (int i = 0; i < 2 * n; i++) {
        for (int j = i + 1; j < 2 * n; j++) {
            vector<int> remaining;

            for (int k = 0; k < 2 * n; k++) {
                if (k != i && k != j) {
                    remaining.push_back(weights[k]);
                }
            }

            int instability = 0;
            for (int k = 0; k < remaining.size(); k += 2) {
                instability += abs(remaining[k + 1] - remaining[k]);
            }

            min_instability = min(min_instability, instability);
        }
    }

    cout << min_instability << endl;

    return 0;
}

