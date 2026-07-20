class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> result;
        int m=grid.size();
        int n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                result.push_back(grid[i][j]);
            }
        }

        int total=m*n;
        k%=total;

        //Shift the array
        vector<int> shifted(total);
        for(int i=0;i<total;i++){
            shifted[(i+k)%total]=result[i];
        }
        //Convert the shifted array to grid
        vector<vector<int>> ans(m,vector<int> (n));
        int idx=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[i][j]=shifted[idx++];
            }
        }
        return ans;
    }
};