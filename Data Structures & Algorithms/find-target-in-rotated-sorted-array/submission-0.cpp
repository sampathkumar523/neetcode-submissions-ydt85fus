class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l=0,r=nums.size()-1;

        while(l < r)
        {
            int mid = l + (r-l)/2;
            if(nums[mid] < nums[r])
            {
                r = mid;
            }
            else
            {
                l = mid+1;
            }
        }

        // l is now min index.
        int minIndex = l;
        l = 0;
        r = nums.size()-1;       
        //0,l,r

        int new_l, new_r;
        if(target >= nums[minIndex] && target <= nums[r])
        {
            new_l = minIndex, new_r = r;
        }
        else if(minIndex-1 >= 0 && target >= nums[0] && target <= nums[minIndex-1])
        {
            new_l = 0;
            new_r = minIndex-1;
        }
        else
        {
            return -1;
        }

        while(new_l <= new_r)
        {
            int mid = new_l + (new_r-new_l)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            if(nums[mid] > target)
            {
                new_r = mid-1;
            }
            else
            {
                new_l = mid+1;
            }
        }

        return -1;

    }
};
