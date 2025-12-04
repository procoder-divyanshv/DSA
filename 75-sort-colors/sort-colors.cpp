class Solution {
public:
    vector<int> merge(vector<int> a,vector<int> b){
        vector<int>c(a.size()+b.size());
        int i=0;
        int j=0;
        int idx=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<=b[j]){
                c[idx]=a[i];
                i++;
                idx++;

            }
            else{
                c[idx]=b[j];
                j++;
                idx++;

            }

        }
        while(i<a.size()){
            c[idx]=a[i];
            i++;
            idx++;

        }
        while(j<b.size()){
            c[idx]=b[j];
            j++;
            idx++;

        }
        return c;
    }
    void sortColors(vector<int>& nums) {
        //sorting is not allowed this time.
        vector<int>a;
        vector<int>b;
        vector<int>c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                a.push_back(nums[i]);
            }
            else if(nums[i]==1){
                b.push_back(nums[i]);

            }
            else{
                c.push_back(nums[i]);
            }

        }
        vector<int>d=merge(a,b);
        vector<int>e= merge(d,c);
        // return e;
        nums=e;




    }
};