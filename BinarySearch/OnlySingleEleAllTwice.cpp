#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
         int n=nums.size();
    //     int x=0;
    //     // int low=0,high=n-1,mid=(low+high)/2;
    //     for(int i=1;i<n;i++){
    //         if(nums[i-1]==nums[i] || nums[i+1]==nums[i]){
    //             continue;
    //         }
    //         else x=nums[i];break;
    //     }return x;
    //  }
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(mid%2==1) mid--;
            if(nums[mid]==nums[mid+1]){
                low=mid+2;
            }else high=mid-1;
     
    }return nums[low];
    }
};