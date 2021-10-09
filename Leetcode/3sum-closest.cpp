// https://leetcode.com/problems/3sum-closest/

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        
        int min=INT_MAX,n=nums.size(),sum;
        
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1,k=n-1;j!=k;)
            {
                int s=nums[i]+nums[j]+nums[k];
                if(abs(s-target)<abs(min))
                {
                    min=s-target;
                    sum=s;
                }
                
                if(s<target)
                    j++;
                else
                    if(s>target)
                        k--;
                else
                {
                    sum=target;
                    return sum;
                }
            }
        }
        
        return sum;
    }
};