#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int low=0,high=arr.size()-1;
        if(arr.size()==1){
            return arr[0];
        }
        if(arr[low]!=arr[low+1]){
            return arr[low];
        }
        if(arr[high]!=arr[high-1]){
            return arr[high];
        }
        low=1,high=arr.size()-2;
        while(high>=low){
            int mid=(low+high)/2;
            if(arr[mid-1]!=arr[mid]&&arr[mid]!=arr[mid+1]){
                return arr[mid];
            }
            else{
                if(((mid)&1)&&arr[mid-1]!=arr[mid]||(mid%2==0)&&arr[mid+1]!=arr[mid]){
                        high=mid-1;
                }
                else{
                    low=low+1;
                }
            }
        }
        return -1;
    }
};