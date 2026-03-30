class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map <char,int> count;

        int l = 0, r = 0,maxLen = 0;
        while (r < s.size())
        {
            count[s[r]]++;
            auto it = max_element(count.begin(), count.end(),
                            [](const auto& a, const auto& b)
                            {
                                return a.second < b.second;
                            });

            while((r-l+1) - it->second > k)
            {
                count[s[l]]--;
                it = max_element(count.begin(), count.end(),
                            [](const auto& a, const auto& b)
                            {
                                return a.second < b.second;
                            });
                l++;
            }
            maxLen = max(r-l+1, maxLen);
            r++;
        }                
    
        return maxLen;
    }
};
