class Solution {
public:
        int gcd(int a , int b){
            while(a>0 & b>0){
                if(a>b){
                    a=a%b;
                }
                else{
                    b=b%a;
                }
            }
                if(a==0) return b;
                else return a;
            }
        
    int findGCD(vector<int>& nums) {
        int mini=nums[0];
        int maxi=nums[0];
        for (int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        return gcd(mini , maxi);
    }
};