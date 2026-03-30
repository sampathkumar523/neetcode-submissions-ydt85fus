class Solution {
public:
    bool isPalindrome(string s) {
        
        if(s.empty()) return true;

        for(int i = 0,j = s.size()-1; i < s.size(),j >=0,i <= j;)
        {
            while(i < s.size() && i < j && !isalnum(s[i])) i++;

            while(j >=0 && j > i && !isalnum(s[j])) j--;

            if(tolower(s[i]) == tolower(s[j]))
            {
                i++;
                j--;
                continue;
            }

            return false;
        }

        return true;

    }
};
