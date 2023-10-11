#include<bits/stdc++.h>
using namespace std;
class Solution {
private:
    int lower_bound(int n ,vector<int>&nums,int x){
        int low=0;
        int high=n-1;
        int ans=n;
        while(high>=low){
            int mid=(low+high)/2;
            if(nums[mid]>=x){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upper_bound(int n ,vector<int>&nums,int x){
        int low=0;
        int high=n-1;
        int ans=n;
        while(high>=low){
            int mid=(low+high)/2;
            if(nums[mid]>x){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lower_bound(nums.size(),nums,target);
        if(lb==nums.size()||nums[lb]!=target) {return {-1,-1};}
        int ub=upper_bound(nums.size(),nums,target)-1;
        return {lb,ub};
    }
};