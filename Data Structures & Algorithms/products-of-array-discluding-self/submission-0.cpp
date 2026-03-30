class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> result(nums.size(),1);

        int leftprod = 1;

        for(int i = 0; i< nums.size(); i++)
        {
            result[i] *= leftprod;
            leftprod *= nums[i];
        }


        int rightprod = 1;

        for(int i = nums.size()-1; i >= 0; i--)
        {
            result[i] *= rightprod;
            rightprod *= nums[i];
        }

        return result;
        
    }
};
