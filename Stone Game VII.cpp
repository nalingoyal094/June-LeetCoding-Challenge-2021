class Solution {
public:
    
    vector<vector<int>>dp;
    
    int solve(int left,int right,int sum,vector<int>& stones)
    {
        if (dp[left][right]!=-1)
        {
            return dp[left][right];
        }
        if (left==right)
        {
            return 0;
        }
        if (right-left==1)
        {
            return max(stones[left],stones[right]);
        }
        
        dp[left][right]=max((sum-stones[left]-solve(left+1,right,sum-stones[left],stones)),(sum-stones[right]-solve(left,right-1,sum-stones[right],stones)));
        return dp[left][right];
        
        
    }
    
    int stoneGameVII(vector<int>& stones) {
        if (stones.size()==0)
        {
            return 0;
        }
        int n=stones.size();
        
        dp.resize(n,vector<int>(n,-1));
        
        int sum=0;
        for (int i=0;i<n;i++)
        {
            sum+=stones[i];
        }
        int left=0;
        int right=n-1;
        
        dp[left][right]=max((sum-stones[left]-solve(left+1,right,sum-stones[left],stones)),(sum-stones[right]-solve(left,right-1,sum-stones[right],stones)));
        return dp[left][right];
    }
    
    
    
};
