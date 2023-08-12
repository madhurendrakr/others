class Solution
{
public:
    int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
    {
        int k = obstacleGrid.size();
        int l = obstacleGrid[0].size();
        long long mod = 2e9 + 7;
        vector<int> prev(l, 0);
        for (int i = 0; i < k; i++)
        {
            vector<int> curr(l, 0);
            for (int j = 0; j < l; j++)
            {

                if (i >= 0 && j >= 0 && obstacleGrid[i][j] == 1)
                {
                    curr[j] = 0;
                    // continue;
                }
                else if (i == 0 && j == 0)
                {
                    curr[j] = 1;
                    // continue;
                }
                else
                {
                    int above = 0;
                    int left = 0;
                    if (i > 0)
                    {
                        above = prev[j];
                    }
                    if (j > 0)
                    {
                        left = curr[j - 1];
                    }
                    curr[j] = (above + left) % mod;
                }
            }
            prev = curr;
        }

        return prev[l - 1];
    }
};