#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

class Solution {
public:
    long maxTransferRate(vector<int>& throughput, int pipelineCount) {
        int n = throughput.size();
        long result = 0;

        sort(throughput.rbegin(), throughput.rend());

        priority_queue<tuple<long, int, int>> pq;
        pq.emplace((long)throughput[0] + throughput[0], 0, 0);
        vector<vector<bool>> visited(n, vector<bool>(n, false));

        while (!pq.empty() && pipelineCount > 0) {
            auto [rate, i, j] = pq.top();
            pq.pop();

            if (visited[i][j]) continue;
            visited[i][j] = true;

            result += rate;
            pipelineCount--;

            if (i + 1 < n && !visited[i + 1][j]) {
                pq.emplace((long)throughput[i + 1] + throughput[j], i + 1, j);
            }
            if (j + 1 < n && !visited[i][j + 1]) {
                pq.emplace((long)throughput[i] + throughput[j + 1], i, j + 1);
            }
        }

        return result;
    }
};