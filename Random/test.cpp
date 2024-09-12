#include <iostream>
#include <vector>

using namespace std;

int maximumTreasure(int N, int M, const vector<vector<int>>& treasure,  int K) {
    vector<vector<int>> pxs(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            pxs[i][j] = (i > 0 ? pxs[i - 1][j] : 0) + treasure[i][j];
        }
    }

    int mx = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int cs = pxs[i][j];
            for (int k = i; k >= 0; k--) {
                cs -= (k > 0 ? pxs[k - 1][j] : 0);  // <---- changed line
                if (cs > mx && cs <= K) {
                    mx = cs;
                }
            }
        }
    }

    return mx;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> treasure(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> treasure[i][j];
        }
    }

    int result = maximumTreasure(N, M, treasure, K);
    cout << result << endl;
    return 0;
}