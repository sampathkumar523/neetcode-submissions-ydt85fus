class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;

        int size = numbers.size();
        for(int i = 0, j = size-1; i < j;)
        {
            if((numbers[i] + numbers[j]) < target)
            {
                i++;
                continue;
            }

            if((numbers[i] + numbers[j]) > target)
            {
                j--;
                continue;
            }

            result.push_back(i+1);
            result.push_back(j+1);

            break;
        }

        return result;
    }
};
