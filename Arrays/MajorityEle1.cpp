#include<bits/stdc++.h>
using namespace std;
class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         map<int,int>mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         for(auto it:mp){
//             if(it.second>(nums.size()/2)) 
//                 return it.first;
           
//         }return -1;
//         }

int majorityElement(vector<int>& nums) {
        int ele,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                ele=nums[i];
                cnt++;
            }
            else if(nums[i]==ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ele)cnt1++;
        }if(cnt1>nums.size()/2)return ele;
        return -1;
    }   
};