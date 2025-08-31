class Solution {
    // int findMax(vector<int>& arr){
    //     int max=arr[0];
    //     for(int val:arr){
    //         if(val>max) {
    //             max=val;

    //         }
    //     }
    //     return max;

    // }
    // int binarySearch(vector<int> &arr,int key){
        
    //     int low=0;
    //     int high= arr.size()-1;
    //     int mid =low+(high-low)/2;
    //     while(low<=high){
    //         if(arr[mid]==key){
    //             return mid;
    //         }
    //         else if(arr[mid]>key){
    //             high=mid-1;
    //             mid =low+(high-low)/2;
                

    //         }
    //         else if(arr[mid]<key){
    //             low=mid+1;

    //             mid =low+(high-low)/2;
    //         }

    //     }
    //     return -1;
    // }
    int searchPeak(vector<int> &arr){
        int low=0;
        int high= arr.size()-1;
        int mid = low+(high-low)/2;
        while(low<high){
            if(arr[mid]<arr[mid+1]){
                low=mid+1;
                

            }
            else{
                high=mid;
                
            }
            mid=low+(high-low)/2;
        }
        return low;
    }
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        // int key = findMax(arr);
        // return key;
        // sort(arr.begin(),arr.end());
        // return binarySearch(arr,key);
        int ans= searchPeak(arr);
        return ans;


        
    }
};