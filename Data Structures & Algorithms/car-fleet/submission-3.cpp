class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {         
             
         int nCars = position.size();        
         unordered_map<int,int> umap;

         for(int i = 0; i < nCars; i++)
         {
            umap[position[i]] = speed[i];
         }

         stack<double> stac;
                  
         sort(position.begin(), position.end(), [](int a, int b) {
    return a > b;});      

         for(int i = 0; i < nCars; i++)
         {
            double time = (double)(target-position[i])/umap[position[i]];

            if(stac.empty())
            {
                stac.push(time);               
            }
            else
            {
                if(time > stac.top())
                {
                    stac.push(time);
                }
            }
         }      

         return stac.size();    
    }
};
