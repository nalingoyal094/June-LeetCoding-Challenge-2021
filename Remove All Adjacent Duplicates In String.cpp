class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        
        for (int i=0;i<s.size();i++)
        {
            if (st.empty())
            {
                st.push(s[i]);
                continue;
            }
            
            if (s[i]!=st.top())
            {
                st.push(s[i]);
                continue;
                
            }
            if (s[i]==st.top())
            {
                st.pop();
                continue;
                
            }
            
            
        }
        string ans="";
        
        while(st.empty()==false)
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
        
    }
};
