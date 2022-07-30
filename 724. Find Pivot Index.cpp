class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int size = nums.size();
    int total = 0;
    int left = 0;
    for (size_t i = 0; i < size; i++)
        total += nums[i];
    for (size_t i = 0; i < size; i++){
        if (i != 0)
            left += nums[i - 1];
        if (total - left - nums[i] == left)
            return i;
    }
    return -1;
    }
};
