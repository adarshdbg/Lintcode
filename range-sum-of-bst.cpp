int rangeSumBST(TreeNode * root, int L, int R) {
        // write your code here
       if(root==NULL) return 0;
int ans =0;
if(root->val < L) ans += rangeSumBST(root->right, L, R);
else if(root -> val > R) ans+= rangeSumBST(root->left, L, R);
else ans+=root->val+rangeSumBST(root->right, L, R)+rangeSumBST(root->left, L, R);
return ans;
        
        
    }