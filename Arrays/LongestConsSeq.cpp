 #include<bits/stdc++.h>
 using namespace std;
//  class Solution {
//  public:int longestConsecutive(vector<int>& nums) {
//         sort(nums.begin(),nums.end());
//         int longest=1,currcnt=1,lastsmaller=INT_MAX;
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]-1==lastsmaller){
//                 currcnt++;
//                 lastsmaller=nums[i];
//             }
//             else if(nums[i]!=lastsmaller){
//                 currcnt=1;
//                 lastsmaller=nums[i];
//             }else if(nums[i]==lastsmaller){

//             }longest=max(longest,currcnt);
//         }return longest;
//     }
// };
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> st;
    int longest=1;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
           int cnt=1;
           int x=it;
           while(st.find(x+1)!=st.end()){
            cnt++;
            x=x+1;
           }longest=max(longest,cnt);
        }
    }return longest;
}
};