class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length())
                return false;

        unordered_map<char,int> map1;
        unordered_map<char,int> map2;

        for(auto &c : s)
        {
            map1[c]++;
        }
        
        for(auto &c : t)
        {
            map2[c]++;
        }

       for(const auto &t : map1)
       {
           if(map2[t.first] != t.second) return false;
       }
    
    
       return true;
    }
};
