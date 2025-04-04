class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int n = nums.size();
        vector<int> index;
        unordered_map<int,int> ind;

        for (int i = 0; i < n; i++) 
        {
            int c=target-nums[i];
            if (ind.find(c)!=ind.end() && ind[c] != i) 
            {
                index.push_back(ind[c]);
                index.push_back(i);
                return ans;
            }
            ind[nums[i]] = i;
        }
        return index;
    }
};
