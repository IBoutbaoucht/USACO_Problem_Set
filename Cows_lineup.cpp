#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    freopen("lineup.in", "r", stdin);  
    freopen("lineup.out", "w", stdout);

    map<int, string> vaches = {
        {1, "Beatrice"}, {2, "Belinda"}, {3, "Bella"}, {4, "Bessie"},
        {5, "Betsy"}, {6, "Blue"}, {7, "Buttercup"}, {8, "Sue"}
    };

    map<string, int> reversed_vaches = {
        {"Beatrice", 1}, {"Belinda", 2}, {"Bella", 3}, {"Bessie", 4},
        {"Betsy", 5}, {"Blue", 6}, {"Buttercup", 7}, {"Sue", 8}
    };

    cin >> n;
    vector<pair<int, int>> constraints;

    for (int i = 0; i < n; i++) {
        string namecow, temp, namecowy;
        cin >> namecow >> temp >> temp >> temp >> temp >> namecowy;
        constraints.push_back({reversed_vaches[namecow], reversed_vaches[namecowy]});
    }

    vector<int> permutation(8);
    iota(permutation.begin(), permutation.end(), 1); // Fill with 1 through 8.
    vector<int> best;

    do {
        bool valid = true;
        for (const auto& [x, y] : constraints) {
            auto it = find(permutation.begin(), permutation.end(), x);
            int index_x = distance(permutation.begin(), it);

            it = find(permutation.begin(), permutation.end(), y);
            int index_y = distance(permutation.begin(), it);

            if (abs(index_x - index_y) != 1) { // They are not adjacent
                valid = false;
                break;
            }
        }

        if (valid) {
            if (best.empty() || 
                lexicographical_compare(permutation.begin(), permutation.end(),
                                        best.begin(), best.end())) {
                best = permutation;
            }
        }
    } while (next_permutation(permutation.begin(), permutation.end()));

    for (int i : best) {
        cout << vaches[i] << endl;
    }

    return 0;
}

