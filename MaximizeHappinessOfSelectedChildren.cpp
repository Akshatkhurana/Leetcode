class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long total = 0;
        int n = happiness.size();
        sort(happiness.begin(),happiness.end());
        for(int i=0;i<k;i++)
        {
            long long curr = happiness[n-i-1];
            if(curr - i > 0)
            {
                total = total  + (happiness[n-i-1] - i);
            }
        }
        return total;
    }
};
