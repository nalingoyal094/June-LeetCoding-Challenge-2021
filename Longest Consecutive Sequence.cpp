class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        map<int,int>mp;
        for (int i=0;i<nums.size();i++)
        {
            mp[nums[i]]=1;
        }
        
        
        for (int i=0;i<nums.size();i++)
        {
            if (mp[nums[i]-1]==1 || mp[nums[i]-1]==-1 )
            {
               mp[nums[i]]=-1;
                
                
            }
            
        }
        
        
        for (int i=0;i<nums.size();i++)
        {
            if (mp[nums[i]]==1)
            {
               cout<<nums[i]<<endl;
                
                
            }
            
        }
        
        
        int max_len=0;
        
        for (int i=0;i<nums.size();i++)
        {
            if (mp[nums[i]]==1)
            {
                int len=1;
                int k=nums[i]+1;
                 while(mp[k]==-1)
                 {
                      len++;
                     k++;
                     
                 }
                if(len>max_len)
                {
                    max_len=len;
                }
            }
        }
        
        return max_len;
        
        
    }
};

// T.C = O(N)
// S.C = O(N)
