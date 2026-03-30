class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;

        for(auto &elem : nums)
        {
            if(umap[elem] > 0)
                return true;
            
            umap[elem] = 1;
        }
        return false;
    }
};