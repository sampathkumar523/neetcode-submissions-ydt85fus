class TimeMap {
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mmap_kv[key].push_back(make_pair(timestamp,value));
    }
    
    string get(string key, int timestamp) {

        if(mmap_kv.find(key) == mmap_kv.end())
            return "";

        vector<pair<int,string>> time_value_pairs =  mmap_kv[key];

        int l = 0, r = time_value_pairs.size();

        while(l < r)
        {
            int mid = l + (r-l)/2;

            if(time_value_pairs[mid].first <= timestamp)
            {
               l = mid+1; 
            }
            else
            {
                r = mid;                
            }
        }

        if(r == 0)
        {   
           return ""; 
        }
        else
        {
            return time_value_pairs[r-1].second;
        }        
    }

private:
    unordered_map<string, vector<pair<int, string>>> mmap_kv;
};
