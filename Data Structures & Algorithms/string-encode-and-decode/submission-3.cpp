class Solution {
public:

    string encode(vector<string>& strs) {
        string strencode;
        lengths.clear();
        for(auto &str: strs)
        {
            lengths.push_back(str.size());
            strencode += str;
        }

        return strencode;
    }

    vector<string> decode(string s) {
        vector<string> result;

        int start = 0;
        for(const auto len : lengths)
        {
            result.push_back(s.substr(start, len));
            start += len;
        }

        return result;
    }
private:
    vector<int> lengths;
};
