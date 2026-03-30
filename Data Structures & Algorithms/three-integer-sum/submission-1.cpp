class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        int size = nums.size();

        for(int i = 0; i < size; i++)
        {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int target = 0 - nums[i];
            for(int j = i+1, k = size-1; j < k;)
            {
                if((nums[j] + nums[k]) < target)
                {
                    j++;                    
                }
                else if((nums[j] + nums[k]) > target)
                {
                    k--;
                }
                else
                {
                    result.push_back({nums[i], nums[j], nums[k]});
                        
                    while (j < k && nums[j] == nums[j+1]) j++;
                    while (j < k && nums[k] == nums[k-1]) k--;
                    j++;
                    k--;
                }
            }
        }
        return result;
    }
};