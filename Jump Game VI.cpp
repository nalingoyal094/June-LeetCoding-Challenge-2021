// for help see radhika jhunjhunwala tutorial on yt

class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        deque<int>q;
        
        q.push_back(0);
        
        for (int i=1;i<nums.size();i++)
        {
            while (q.front()+k<i)
            {
                q.pop_front();
            }
            
            nums[i]+=nums[q.front()];
            
            while( q.empty()==false && nums[q.back()]<nums[i])
            {
                q.pop_back();
            }
            q.push_back(i);
            
            
        }
        return nums[nums.size()-1];
        
    }
};
