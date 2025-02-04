class Solution {
  bool isAnagram(String s, String t) {
    List<String> sList = s.split("")..sort();
    List<String> tList = t.split("")..sort();
    if (s.length != t.length) {
      return false;
    } else {
      return sList.join() == tList.join();
    }
  }
}

void main() {
  Solution solution = Solution();
  print(solution.isAnagram("aacc", "ccaa"));
}
