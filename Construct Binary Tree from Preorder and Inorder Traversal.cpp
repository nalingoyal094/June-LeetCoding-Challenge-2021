class Solution {
public:
    
    map<int ,int >mp;
    int idx=0;
    
    
    TreeNode *solve(vector<int>& preorder, vector<int>& inorder,int lb,int ub)
    {
        if (lb>ub)
            return NULL;
        
      TreeNode *root= new TreeNode(preorder[idx]);
        int mid=mp[preorder[idx]];
         idx++;
        if (lb==ub)
        {
            return root;
        }
        
       
       
        
        root->left=solve(preorder,inorder,lb,mid-1);
        root->right=solve(preorder,inorder,mid+1,ub);
        
        return root;
        
        
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        mp.clear();
        idx=0;
        for (int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
            
        }
        
        return solve(preorder,inorder,0,preorder.size()-1);
        
        
    }
};
