class Solution {
public:
    bool checkInclusion(string s1, string s2) {
                
        if(s1.size() > s2.size())
            return false;
        
        vector<int> count1(26,0);
         vector<int> count2(26,0);

        for(auto &elem : s1)
        {
            count1[elem-97]++;
        }

        int l = 0, temp = l, fixedsize = s1.size();

        while(l <= s2.size() - s1.size())
        {
            while(temp < fixedsize)
            {
                count2[s2[l+temp]-97]++;
                temp++;
            }

            if(count2 == count1)
                return true;

            temp -= fixedsize;

            while(temp < fixedsize)
            {
                count2[s2[l+temp]-97]--;
                temp++;
            } 
                
            l++;
            temp = 0;
            
        }

        return false;        
    }
};
