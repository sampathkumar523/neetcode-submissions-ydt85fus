class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 0, r = nums.size()-1;

        while(l <= r)
        {
            if(nums[l] == 0)
            {
                l++;
                continue;
            }   

            if(nums[nums[l]-1] == 0)
                return nums[l];
            
            int temp = nums[nums[l]-1];
            nums[nums[l]-1] = 0;
           
            if(nums[l] == 0)
            {
                l++;
                continue;
            }              
                     

            nums[l] = temp;
        }
    }
};
