class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int l = 0; 
        int r = nums.size()-1;

        while(l <= r)
        {          
            int mid = l + (r-l)/2; 

            if(l == mid)
            {  
                if(nums[l] < nums[r])
                    return nums[l];
                else
                    return nums[r];
            } 

            if(nums[l] > nums[mid])
            {  
                r = mid;                
            }  
            else if(nums[mid] > nums[r])
            {
                l = mid;
            }
            else
            {
                return nums[l];
            }

        }
    }
};

//{5, 1, 2, 3, 4};
//{3, 4, 5, 6, 1, 2};