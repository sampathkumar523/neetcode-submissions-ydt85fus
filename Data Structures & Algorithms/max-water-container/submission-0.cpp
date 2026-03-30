class Solution {
public:
    int maxArea(vector<int>& heights) {
        int MaxArea = 0;
        int size = heights.size();

        for(int i = 0, j = size-1; i < j;)
        {
            int area = (j-i)*min(heights[i],heights[j]);
            if(area > MaxArea)
            {
                MaxArea = area;             
            }            
               
            if(heights[i] < heights[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return MaxArea;
    }
};
