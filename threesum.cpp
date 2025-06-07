class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> temp;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size()-2; i++)
        {
            int prev = i+1; int next = nums.size()-1;
            if (i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            while(prev < next)
            {
            int sum = nums[i] + nums[prev] + nums[next];
            if (sum == 0)
            {
                temp.push_back({nums[i], nums[prev], nums[next]});
                prev++;
                next--;
                while(prev < next && nums[prev] == nums[prev-1])
                {
                    prev++;
                }
                while(prev< next && nums[next] == nums[next+1])
                {
                    next--;
                }
            }
            else if (sum > 0)
            {
                next--;
            }
            else
            {
                prev++;
            }
            }
        }
        return temp;
    }
};
