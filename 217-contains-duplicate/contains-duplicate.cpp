class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> seen;

        for(int i = 0; i < nums.size(); i++) {

            if(seen.find(nums[i]) != seen.end()) {
                return true;
            }

            seen.insert(nums[i]);
        }

        return false;
    }
};
// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {

//         int n = nums.size();

//         for(int i = 0; i < n; i++) {

//             for(int j = i + 1; j < n; j++) {

//                 if(nums[i] == nums[j]) {
//                     return true;
//                 }

//             }
//         }

//         return false;
//     }
// };