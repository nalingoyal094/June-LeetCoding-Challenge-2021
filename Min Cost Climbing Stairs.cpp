class Solution {

   
public:
    vector<int >c;
     vector<int>v1={};
    int n;
    int f(int i)
    {
        if (i>=n)
        {
            return 0;
        }
        if (v1[i]!=-1)
        {
            
            return v1[i];
        }
        
        
        
        v1[i]=c[i]+min(f(i+1),f(i+2));
        
        return v1[i];
        // return c[i]+min(f(i+1),f(i+2));
        
        
        
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        
        c=cost;
        n=cost.size();
      
        for (int i=0;i<n;i++)
        {
            v1.push_back(-1);
}
        cout<<v1[0]<<endl;
         cout<<v1[1]<<endl;
        
        if (cost.size()==2)
            return min(cost[0],cost[1]);
        
        return min(f(0),f(1));
        
    }
};
