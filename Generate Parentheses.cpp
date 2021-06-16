class Solution {
public:
    vector<string>ans;
    void solve(string res,int open,int close,int n)
    {
        if (open==close && res.size()==2*n)
        {
            ans.push_back(res);
        }
        if (close>open)
        {
            return;
        }
        
        if (close<open)
        {
            solve(res+")",open,close+1,n);
        }
        if (open<n)
        {
            solve(res+"(",open+1,close,n);
        }
        
        
    }
    
    vector<string> generateParenthesis(int n) {
        int open=0;
        int close=0;
        
        
        
        string res="";
        
        solve(res,open,close,n);
        return ans;
        
        
    }
};
