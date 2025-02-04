class Solution {
  bool containsDuplicate(List<int> nums) {
    Set<int> numSet = {};
    bool condition = false;
    for (int i = 0; i < nums.length; i++) {
      if (numSet.contains(nums[i])) {
        condition = true;
        break;
      } else {
        numSet.add(nums[i]);
        condition = false;
      }
    }
    return condition;
  }
}

void main() {
  Solution s = new Solution();
  print(s.containsDuplicate([1, 2, 3, 1]));
}
