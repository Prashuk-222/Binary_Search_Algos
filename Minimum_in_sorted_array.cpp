#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;
        while(high>=low){
            int mid=(high+low)/2;
            if(nums[low]<=nums[high]){
                ans=min(ans,nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){
                if(ans>nums[low]){
                    ans=nums[low];
                }
                low=mid+1;
            }
            else{
                if(ans>nums[mid]){
                    ans=nums[mid];
                }
                high=mid-1;
            }
        }
        return ans;
    }
};