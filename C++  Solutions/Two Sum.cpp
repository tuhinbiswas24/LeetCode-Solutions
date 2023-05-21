class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> p;
        unordered_map<int,int> hashmap;
        for (int i = 0; i < nums.size(); i++) {
        // check if the complement of the current number is in the map
        int complement = target - nums[i];
        if (hashmap.count(complement)) {
            // return the indices of the two numbers
            return {hashmap[complement], i};
        }
        // otherwise, store the current number and its index in the map
        else {
            hashmap[nums[i]] = i;
        }
    }
    // return an empty vector if no solution is found
    return {};
    }
};
