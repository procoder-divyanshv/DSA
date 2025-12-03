class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=nums[i]*nums[i];

        // }
        // sort(nums.begin(),nums.end());
        // return nums;

        // int i=0;
        // int j=nums.size()-1;
        // vector<int> result(nums.size());
        // while(i<j){
        //     if(nums[i]*nums[i] > nums[j]*nums[j]){
        //         result[j]=nums[i]*nums[i];
        //         i++;
        //     }else{
        //         result[j]=nums[j]*nums[j];
        //         j--;
        //     }
        // }
        // return result;
        // vector<int> a= {-4,-1,0,3,10};
        vector<int> result(nums.size());
        vector<int> a; //positive 
        vector<int> b; //negative
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        if(a.size()==0){
            for(int i=0;i<b.size();i++){
                b[i]=b[i]*b[i];

            }
            reverse(b.begin(),b.end());
            return b;

        }
        else if(b.size()==0){
            for(int i=0;i<a.size();i++){
                a[i]=a[i]*a[i];

            }
            return a;
        }
        else{
            int idx1=0;
            int idx2=0;
            int idx3=0;
            for(int i=0;i<a.size();i++){
                a[i]=a[i]*a[i];

            }
            for(int i=0;i<b.size();i++){
                b[i]=b[i]*b[i];

            }
            reverse(b.begin(),b.end());
            while(idx1<a.size() && idx2<b.size()){
                if(a[idx1]<=b[idx2]){
                    result[idx3]=(a[idx1]);
                    idx1++;
                    idx3++;

                }
                else{
                    result[idx3]=(b[idx2]);
                    idx2++;
                    idx3++;
                }
            }
            while(idx1<a.size()){
                result[idx3]=(a[idx1]);
                idx1++;
                idx3++;
            }
            while(idx2<b.size()){
                result[idx3]=(b[idx2]);
                idx2++;
                idx3++;
            }

        }
        return result;
    }

};