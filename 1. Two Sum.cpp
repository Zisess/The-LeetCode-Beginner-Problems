class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<int> sacmalik(0);
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target && i != j)
                return vector<int> { i, j };
        }
    }
    return sacmalik;
    }
};
