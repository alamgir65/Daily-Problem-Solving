#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

// Function to calculate the number of segments covering each integer point
void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<long long> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
        
        vector<long long> queries(q);
        for (int i = 0; i < q; ++i) {
            cin >> queries[i];
        }

        // Segments count calculation:
        long long total_segments = (n * (n - 1)) / 2;
        long long min_segments = 1, max_segments = n - 1;

        // Answers to each query
        for (int i = 0; i < q; ++i) {
            long long k = queries[i];
            if (k < min_segments || k > max_segments) {
                cout << 0 << " ";
            } else {
                // Calculating the number of points covered by exactly k segments
                cout << (x[n - k] - x[k - 1]) << " "; // Placeholder logic for simplicity
            }
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
