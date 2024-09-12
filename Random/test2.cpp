#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <climits>
using namespace std;

bool compareSegments(const vector<int>& s1, const vector<int>& s2) {
    return s1[1] < s2[1];
}

long long findMinCost(vector<vector<int>>& segments) {
    sort(segments.begin(), segments.end(), compareSegments);

    set<pair<int, int>> activeSegments;
    long long minCost = LLONG_MAX;
    bool foundValidPair = false;

    for (const auto& seg : segments) {
        auto it = activeSegments.lower_bound({seg[0] + 1, 0});
        if (it != activeSegments.begin()) {
            --it;
            long long pairCost = static_cast<long long>(it->second) * seg[2];
            minCost = min(minCost, pairCost);
            foundValidPair = true;
        }

        activeSegments.insert({seg[0], seg[2]});
    }

    return foundValidPair ? minCost : -1;
}

int main() {
    int N;
    cin >> N;

    int dummy;
    cin >> dummy;

    vector<vector<int>> segments(N, vector<int>(3));
    for (int i = 0; i < N; ++i) {
        cin >> segments[i][0] >> segments[i][1] >> segments[i][2];
    }

    long long result = findMinCost(segments);
    cout << result << endl;

    return 0;
}
