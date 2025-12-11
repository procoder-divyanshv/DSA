class Solution {
public:
    // bool cond(vector<int>temp2){
    //     for(int val: temp2){
    //         if(val == 1){
    //             return true;
    //         }
    //     }
    //     return false;

    // }
    int newn(int n){
        int sum=0;
        while(n>0){
            int d= n%10;
            n=n/10;
            sum= sum+d*d;

        }
        return sum;
    }
    bool isHappy(int n) {
        // int temp1=n;
        // vector<int> temp2;
        // while(temp1>0){
        //     int temp3= temp1%10;
        //     temp1= temp1/10;
        //     temp2.push_back(temp1);
        //     temp2.push_back(temp3);
        // }
        // for(int val : temp2){
        //     cout<<val<<endl;
        // }
        // bool res=cond(temp2);
        // // temp2.push_back()
        // while(!res){
        //     long long sum;
        //     for(int i=0;i<temp2.size();i++){
        //         sum=sum+temp2[i]*temp2[i];

        //     }
        //     temp1=sum;

        // }
        // return res;
        // this is also the question of the slow and fast pointer as there is the cycle exists in the process and the null case is when the fast == 1;
        int slow=n;
        int fast= n;
        while(fast!=1){
            slow= newn(slow);
            fast= newn(fast);
            fast= newn(fast);
            // if(sum== fast)
            if(slow == fast && slow!=1){
                
                return false;
            }
            
        }
        // cout<<fast;
        return true;
    }
};