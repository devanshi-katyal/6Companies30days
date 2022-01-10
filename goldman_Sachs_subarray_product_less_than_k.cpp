// problem name:Count the subarrays having product less than k
// problem link: https://leetcode.com/problems/subarray-product-less-than-k/
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
     int ans=0,i=0,j=0, p=1;
    int n= nums.size();
        while(i<n || j<n){
            i= max(i,j);
            p= max(p,1);
            if(i< n && nums[i]*p<k){
                p= p*nums[i];
                i++;
                ans++;
            } 
            else if(j<n ){
                p= p/nums[j];
                j++;
                if(p<k && j<i){
                    ans+= (i-j);
                }
            }
        }
        return ans;
     }
};
