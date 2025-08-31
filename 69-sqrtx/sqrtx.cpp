class Solution {
    long long int binarySearch(int x){
        int low=0;
        int high=x;
         long long int mid=low+(high-low)/2;
         long long int ans=-1;
        while(low<=high){
            if(mid*mid == x){
                return mid;
            }
            else if(mid * mid>x){
                high=mid-1;

            }
            else if(mid*mid<x){
                ans=mid;
                low=mid+1;

            }
            mid=low+(high-low)/2;
        }
        return ans;

    }
public:

    int mySqrt(int x) {
        return binarySearch(x);

        
        
    }
};