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
    
    vector<int> twoSum_v2(vector<int>& nums, int target) {
    map<int, int> hashmap;
    vector <int> retn;
    for (int i = 0; i < nums.size(); i++)
    {
        if (hashmap.find(target - nums[i]) != hashmap.end())
        {
            retn.push_back(hashmap[target - nums[i]]);
            retn.push_back(i);
            break;
        }
        hashmap[nums[i]] = i;
    }
    return retn;
}
};
