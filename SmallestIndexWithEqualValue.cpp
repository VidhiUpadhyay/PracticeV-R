class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        
        int small=nums.size();
        
        for(int i=0;i<nums.size();i++)
        if (i%10==nums[i] && i<small)
            small=i;
            
        return small==nums.size()?-1:small;
    }
};
