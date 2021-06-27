class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int arr1[n];
        int arr2[n];
        
        for (int i=0;i<n;i++)
        {
            arr1[i]=1;
            arr2[i]=1;
        }
        
        if (ratings.size()==1)
        {
            return 1;
        }
        
        //left
        for (int i=1;i<ratings.size();i++)
        {
            if (ratings[i]>ratings[i-1])
            {
                arr1[i]=1+arr1[i-1];
            }
            
        }
        
        for (int i=n-2;i>=0;i--)
        {
            if (ratings[i]>ratings[i+1])
            {
                arr2[i]=1+arr2[i+1];
            }
            
        }
        
        int candy=0;
        
        for (int i=0;i<ratings.size();i++)
        {
            candy+=max(arr1[i],arr2[i]);
        }
        return candy;
      
    }
};
