class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       vector<int> result;
        
        unordered_map<int,int> umap;        
        multimap<int,int> omap;

        for(auto &c: nums)
        {
            umap[c]++;
        }

        for(const auto &t : umap)
        {            
            omap.insert(make_pair(t.second,t.first));
        }   

        int index = 0;
        
        
        for(auto it = omap.rbegin(); it != omap.rend(); it++)
        {
            if(index < k)
            {
                result.push_back(it->second);
                index++;                
            }
            else
                break;
        }

        return result;
    }
};
