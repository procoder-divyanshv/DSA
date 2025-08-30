class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(),nums2.end());
    int n=nums1.size();
    int m=nums2.size();

    int i=0,j=0;
    vector<int> temp;


    while(i<n && j<m){
        if(nums1[i]==nums2[j]){
            if(temp.empty() || temp.back() != nums1[i]){
                temp.push_back(nums1[i]);
            }
            
            
            i++;
            j++;

            
             

        }
        if(i<n && j<m && nums1[i]<nums2[j]){
            i++;
        }
        if(i<n && j<m && nums1[i]>nums2[j]){
            j++;

        }
    }
    return temp;

        
    }
};