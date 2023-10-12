#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int t) {
        int n=nums.size();
        int low=0,high=n-1;
        while(high>=low){
            int mid=(low+high)/2;
            if(nums[mid]==t){
                return true;
            }
            else if(nums[low]==nums[mid]&&nums[mid]==nums[high]){
                low=low+1;
                high=high-1;
            }
            else if(nums[mid]>=nums[low]){
                if(nums[low]<=t&&t<=nums[mid]){
                    high=mid-1;
                }
                else{
                    low=low+1;
                }
            }
            else{
                if(nums[mid]<=t&&t<=nums[high]){
                    low=low+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return false;
    }
};