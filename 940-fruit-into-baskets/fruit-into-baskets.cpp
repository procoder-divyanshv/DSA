class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int>map;
        int low=0;
        int high=0;
        int res=INT_MIN;
        while(high<fruits.size()){
            map[fruits[high]]++;
            if(map.size() <= 2){
                int len=high-low+1;
                res=max(res,len);

            }
            while(map.size()>2){
                map[fruits[low]]--;
                if(map[fruits[low]]==0){
                    map.erase(fruits[low]);
                }
                low++;

            }
            high++;

        }
        if(res== INT_MIN){
            res=0;
        }
        return res;
        
    }
};