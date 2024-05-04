class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count = 0;
        sort(people.begin(),people.end());
        int i = 0;
        int j = people.size()-1;
        while(i <= j)
        {
            if(people[i] + people[j] <= limit)
            {
                i++; // heavy wala and light weight dono ja rhe hai
            }
            count++; // sirf heavy wala person ja rha hai.
            j--;
        }
        return count;
    }
};
