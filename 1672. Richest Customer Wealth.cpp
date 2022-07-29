class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    vector<int> cmp(accounts.size());
    int max = NULL;
    for (int i = 0; i < accounts.size(); i++)
    {
        for (int j = 0; j < accounts[i].size(); j++)
        {
            cmp[i] += accounts[i][j];
        }
        if (max < cmp[i])
            max = cmp[i];
        else
            max = max;
    } return max;
}
};
