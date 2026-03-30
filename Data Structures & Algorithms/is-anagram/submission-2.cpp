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

       if (map1 == map2) return true;
    
       return false;
    }
};
