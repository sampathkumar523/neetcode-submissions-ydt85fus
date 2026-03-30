class Solution {
public:

    string encode(vector<string>& strs) {
       string result;
       if(strs.empty()) return "#EMPTY#";
    const string delim = "\u0102";

    for (size_t i = 0; i < strs.size(); ++i) {
        if (i > 0) result += delim;
        result += strs[i];
    }
    return result;
    }

    vector<string> decode(string s) {
        if(s == "#EMPTY#") return {};
        std::vector<std::string> tokens;          
            
        string del = "\u0102";
        
       size_t start = 0;
       while(true)
       {
        size_t npos = s.find(del,start);
        if(npos == string::npos)
        {
            tokens.push_back(s.substr(start));
            break;
        }

        tokens.push_back(s.substr(start,npos-start));
        start = npos + del.size();

       }
    
       return tokens;
    }
};
