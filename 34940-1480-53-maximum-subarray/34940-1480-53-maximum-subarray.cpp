class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();
        int max_sm=INT_MIN,curr_sm=0;
        for(int i=0;i<n;i++)
        {
            if(curr_sm<0 && nums[i]<=0)
            {
                curr_sm=nums[i];
            }
            else if(curr_sm<0 && nums[i]>=0)
            {
                curr_sm=nums[i];
            }
            else
            {
                curr_sm+=nums[i];
            }

            max_sm=max(max_sm,curr_sm);
        }

        return max_sm;
    }
};