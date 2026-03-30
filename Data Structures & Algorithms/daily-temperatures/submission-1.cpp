class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int size = temperatures.size();
        vector<int> result(size,0);

        stack<int> stac;        

        for(int i = size-1; i >=0; i--)
        {
            int countdays = 0;

            if(stac.empty())
            {
                result[i] = 0;               
            }
            else
            {               
                while(!stac.empty() && temperatures[stac.top()] <= temperatures[i])
                {                    
                    stac.pop();                                    
                }                
                
                if(!stac.empty())
                    result[i] = stac.top() - i;                
            }
            
            stac.push(i);
        }

        return result;
    }
};
