class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        long res=0;
        long ts=0;
        
        vector<pair<int,int>>v;
        
        for (int i=0;i<n;i++)
        {
            v.push_back({efficiency[i],speed[i]});
        }
        
        sort(begin(v),end(v),[](const pair<int,int>&p1,const pair<int,int>&p2){
            if (p1.first==p2.first)
            {
                return p1.second>p2.second;
            }
            else
            {
                return p1.first>p2.first;
            }
        });
        
        priority_queue<int,vector<int>,greater<int>>q;
        
        for (auto i:v)
        {
            ts+=i.second;
            
            if (q.size()>=k)
            {
                ts-=q.top();
                q.pop();
                q.push(i.second);
            }
            else
            {
                q.push(i.second);
            }
            res=max(res,(i.first)*ts);
        }
        return res%1000000007;
        
        
        
    }
};
