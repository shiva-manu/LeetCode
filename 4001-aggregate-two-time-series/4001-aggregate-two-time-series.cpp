class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1,
                                            vector<vector<int>>& series2) {
        vector<vector<int>> result;

        int i = 0, j = 0;
        int n = series1.size(), m = series2.size();

        while (i < n && j < m) {
            if (series1[i][0] == series2[j][0]) {
                result.push_back({series1[i][0],
                                  series1[i][1] + series2[j][1]});
                i++;
                j++;
            }
            else if (series1[i][0] < series2[j][0]) {
                result.push_back({series1[i][0],
                                  series1[i][1] + series2[j][1]});
                i++;
            }
            else {
                result.push_back({series2[j][0],
                                  series1[i][1] + series2[j][1]});
                j++;
            }
        }

        // Remaining timestamps in series1
        while (i < n) {
            result.push_back({series1[i][0], series1[i][1]});
            i++;
        }

        // Remaining timestamps in series2
        while (j < m) {
            result.push_back({series2[j][0], series2[j][1]});
            j++;
        }

        return result;
    }
};