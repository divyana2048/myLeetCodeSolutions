// https://leetcode.com/problems/two-sum/

# Description
// Given an array of integers nums and an integer target, return indices of the two numbers such
// that they add up to target. You may assume that each input would have exactly one solution, and
// you may not use the same element twice. You can return the answer in any order.

# Evaluation
// Used a single-pass hashmap method to make it run faster. Tradeoff is memory.
// Runtime: 8 ms, faster than 74.67% of C++ online submissions for Two Sum.
// Memory Usage: 10.7 MB, less than 21.80% of C++ online submissions for Two Sum.


vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map <int, int> find_number;
    for (size_t i = 0; i < nums.size(); ++i) {
        if (find_number.find(nums[i]) != find_number.end()) {
            return {find_number.find(nums[i])->second, (int)i};
        }
        find_number.insert(std::pair<int, int>(target-nums[i], (int)i));
    }
    return {};
}
