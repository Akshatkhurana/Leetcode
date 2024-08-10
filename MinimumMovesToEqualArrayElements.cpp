class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mid=n/2;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(i==mid)
            {
                continue;
            }
            if(nums[i]!=nums[mid])
            {
                count += abs(nums[i]-nums[mid]);
            }
        }
        return count;
    }
};
