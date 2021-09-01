class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<bool> visited(nums.size(), false);
        int maxCount = 0, currCount, j;
        for (int i = 0; i < nums.size(); ++i){
            j = i, currCount = 0;
            while (!(visited[j])){
                visited[j] = true;
                j = nums[j];
                currCount++;
            }
            maxCount = max(maxCount, currCount);
        }
        return maxCount;
    }
};