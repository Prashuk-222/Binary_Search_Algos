#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        if(nums.size()==1){
            return 0;
        }
        if(nums[high]>nums[high-1]){
            return high;
        }
        else{
            high=high-1;
        }
        if(nums[low]>nums[low+1]){
            return low;
        }
        else{
            low=low+1;
        }
        while(high>=low){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid-1]&&nums[mid]>nums[mid+1]){
                return mid;
            }
            if(nums[mid]>nums[mid-1]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return -1;
    }
};