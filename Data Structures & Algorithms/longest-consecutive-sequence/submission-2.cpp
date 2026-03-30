class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)
            return 0;

        set<int> oset;

        for(auto elem : nums)
        {
            oset.insert(elem);
        }

        int long_count = 1, curr_long_count = 1;
        auto iter = oset.begin();
        int prev_val = *iter;
        int curr_val = prev_val;
        for(auto iter = oset.begin(); iter != oset.end(); iter++)
        {
            if(iter == oset.begin())
            {
                continue;
            }

            curr_val = *iter;

            if(curr_val == (prev_val+1))
            {
                curr_long_count++;
                if(curr_long_count > long_count)
                {
                    long_count = curr_long_count;                    
                }
                prev_val  = curr_val;
                continue;
            }
            else
            {
                prev_val = curr_val;
                curr_long_count = 1;
            }
        }
        return long_count;
    }
};
