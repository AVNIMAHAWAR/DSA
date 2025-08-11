/**
 * Definition for a binary tree node.**/
#include<bits/stdc++.h>
 using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
       TreeNode(int val) : val(val) , left(nullptr) , right(nullptr) {}
  };


class Solution{
	public:
		vector<vector<int>>  treeTraversal(TreeNode* root){
            if(root==NULL)return {};
            vector<int> pre,in,post;
            stack<pair<TreeNode*,int>>st;
            st.push({root,1});
            
            while(!st.empty()){
                auto it=st.top();
                st.pop();

                if(it.second==1)
                {
                    pre.push_back(it.first->val);
                    it.second++;
                    st.push(it);
                    if(it.first->left!=NULL)
                        st.push({it.first->left,1});
                }
                else if(it.second==2)
                {
                    in.push_back(it.first->val);
                    it.second++;
                    st.push(it);
                    if(it.first->right!=NULL)
                        st.push({it.first->right,2})
                }
                else{
                    post.push_back(it.first->val)
                }
            } return {pre, in, post};
		}
};