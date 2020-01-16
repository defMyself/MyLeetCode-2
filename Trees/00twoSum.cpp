class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sums;
        for(int i=0; i<nums.size()-1;i++)
        {
            for(int j=nums.size()-1; j>i;j--)
            {
                if(target == nums[i] + nums[j])
                {
                    sums.push_back(i);
                    sums.push_back(j);
                    break;
                }
            }
        }
        return sums;
    }
};