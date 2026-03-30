class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {        
 for(int i = 0 ; i < 9 ; i++)
        {
            unordered_map<char,int> urowmap;
            unordered_map<char,int> ucolmap;
            for(int j = 0; j < 9; j++)
            {
               if(board[i][j] != '.' && urowmap[board[i][j]] == 1)
               {
                    return false;
               }
               if(board[j][i] != '.' && ucolmap[board[j][i]] == 1)
               {
                    return false;
               }
             
               urowmap[board[i][j]]++;
               ucolmap[board[j][i]]++;               
            }
        } 

        int k = 0, l = 0;
        while(l < 9)
        {
            unordered_map<char,int> umap;
            for(int i = l; i < l+3 ; i++)
            {                 
                for(int j = k; j < k+3 ; j++)
                {
                    if(board[i][j] != '.' && umap[board[i][j]] == 1)
                    {
                            return false;
                    }                   
                    
                    umap[board[i][j]]++; 
                }                               
            }    
             
            k += 3;
            if(k == 9)
            {
                k = 0;
                l += 3;
            }
        }

        return true;       
    }
};
