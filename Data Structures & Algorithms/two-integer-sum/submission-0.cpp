class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        unordered_map<int,int> umap; 
        umap[nums[0]] = 0;

        for(int i = 1; i < nums.size(); i++)
        {
            int diff = target - nums[i];
           if(umap.count(diff))
           {
                result.push_back(umap[diff]);
                result.push_back(i);
                return result;
           }
           umap[nums[i]] = i;
        }

        return result;
    }
};
