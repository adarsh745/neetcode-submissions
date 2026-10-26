class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;

        for (int i =0;i<nums.size()-1;i++)
        {
            int sum=0;
            for (int j=i+1;j<nums.size();j++)
            {
                sum=nums[i]+nums[j];
                if(sum==target)
                {
                    v={i,j};
                }
                exit;


            }
        }

        return v;
        
    }
};
