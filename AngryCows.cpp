#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("angry.in","r",stdin);
    freopen("angry.out","w",stdout);
  
    int n;
    cin >> n;
    vector<int> places(n);

    for (int i = 0; i < n; i++) {
        cin >> places[i];
    }

    sort(places.begin(), places.end());

    int maxBoom = 0;

    for (int i = 0; i < n; i++) {
        int boom = 1; 
        int step = 1;
        int left = i - 1, right = i + 1;

        while (right < n) {
            int nextRight = right;
            while (nextRight < n && places[nextRight] - places[right - 1] <= step) {
                nextRight++;
                boom++;
            }
            if (nextRight == right) break;
            step++;
            right = nextRight;
        }

        step = 1;

        while (left >= 0) {
            int nextLeft = left;
            while (nextLeft >= 0 && places[left + 1] - places[nextLeft] <= step) {
                nextLeft--;
                boom++;
            }
            if (nextLeft == left) break;
            step++;
            left = nextLeft;
        }

        maxBoom = max(maxBoom, boom);
    }

    cout << maxBoom << endl;
    return 0;
}
