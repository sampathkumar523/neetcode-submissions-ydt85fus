class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m = matrix.size(),n = 0;
        
        if(matrix[0].size())
         n = matrix[0].size();

        int l = 0, r = m-1;
       

        while(l <= r)
        {
             int mid = l + (r-l)/2;
             
             if(matrix[mid][0] == target)
                return true;
             
             if(matrix[mid][0] > target)
             {
                r = mid-1;
             }
             else
                l = mid+1;
        }

        int row = r;
        if(row < 0) row = 0;
        l = 0 , r = n-1;

        while(l <= r)
        {
            int mid = l + (r-l)/2;
            if(matrix[row][mid] == target)
                return true;
             
             if(matrix[row][mid] > target)
             {
                r = mid-1;
             }
             else
                l = mid+1;

        }

        return false;

    }
};
