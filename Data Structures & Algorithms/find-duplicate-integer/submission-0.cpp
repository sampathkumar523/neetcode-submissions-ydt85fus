class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> count(nums.size()+1,0);

        int res = 0;
        for(auto &elem : nums)
        {
            if(count[elem] == 1)
            {
                res = elem;
            }
            else
            {
                count[elem]++;
            }
        }

        return res;
    }
};
