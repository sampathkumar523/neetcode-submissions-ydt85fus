class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<vector<int>,vector<string>> umapof_vec_vs_vecofstrs;


        for(int i = 0; i < strs.size(); i++)
        {
            vector<int> veccount(26,0);

            for(const auto &c : strs[i])
            {
               veccount[c-97]++;
            }

            umapof_vec_vs_vecofstrs[veccount].push_back(strs[i]);
        }

        for(const auto &elem : umapof_vec_vs_vecofstrs)
        {
            result.push_back(elem.second);
        }

        return result;
    }
};
