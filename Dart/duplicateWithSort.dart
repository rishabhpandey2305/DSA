class Solution {
  bool containsDuplicate(List<int> nums) {
    nums.sort();
    bool val = false;
    for (int i = 0; i < nums.length - 1; i++) {
      if (nums[i] == nums[i + 1]) {
        val = true;
        break;
      } else {
        val = false;
      }
    }
    return val;
  }
}

void main() {
  Solution s = new Solution();
  print(s.containsDuplicate([1, 2, 3, 1]));
}
