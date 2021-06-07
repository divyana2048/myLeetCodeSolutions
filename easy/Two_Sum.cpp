// https://leetcode.com/problems/two-sum/

# Description
// Given an array of integers nums and an integer target, return indices of the two numbers such
// that they add up to target. You may assume that each input would have exactly one solution, and
// you may not use the same element twice. You can return the answer in any order.

# Evaluation
// Runtime: 16 ms, faster than 32.05% of C++ online submissions for Two Sum.
// Memory Usage: 11.1 MB, less than 10.62% of C++ online submissions for Two Sum.


vector<int> twoSum(vector<int>& nums, int target) {
    map <int, int> find_number;
    for (size_t i = 0; i < nums.size(); ++i) {
        auto itr = find_number.find(nums[i]);
        if (itr != find_number.end()) {
            vector <int> v = {itr->second, (int)i};
            return v;
        }
        find_number.insert(std::pair<int, int>(target-nums[i], (int)i));
    }
    return {};
}
