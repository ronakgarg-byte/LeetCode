class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int consecutive = 0;
        int maxOnes = 0;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 1) {
                consecutive++;
            }
            else {
                consecutive = 0;
            }

            maxOnes = max(maxOnes, consecutive);
        }

        return maxOnes;
    }
};