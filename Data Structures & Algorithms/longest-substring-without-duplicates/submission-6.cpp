class Solution {
public:
    int lengthOfLongestSubstring(string s) {     
        if(s.size() == 0)
            return 0;
       
        int maxLen = 0;

        int l=0, r=0;
        string currstr = "";
        while(r < s.size())
        {
            string str = s.substr(l,r-l);
            int index = str.find(s[r]);
            if(index != -1)
            {
                if(l+index == r-1)
                {
                    l=r;
                }       
                else
                {
                    l=l+index+1;
                }           
            }  
            else
            {    
                str += s[r];                 
                maxLen = max((int)str.size(),maxLen);                                 
            }
            r++;            
        }

        return maxLen;
    }
};
