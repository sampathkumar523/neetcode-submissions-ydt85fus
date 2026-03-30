class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> umapstr_vs_vecofstrs;


        for(int i = 0; i < strs.size(); i++)
        {
            string s = strs[i];
            std::sort(s.begin(), s.end());

            umapstr_vs_vecofstrs[s].push_back(strs[i]);
                        
        }

        for(auto iter = umapstr_vs_vecofstrs.begin(); iter != umapstr_vs_vecofstrs.end();iter++)
        {
            result.push_back(iter->second);
        }

        return result;

    }
};
