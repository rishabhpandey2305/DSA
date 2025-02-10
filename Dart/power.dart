class Solution {
  double myPow(double x, int n) {
    int pow = n;
    double ans = 1;
    if (pow == 0) {
      return 1;
    }
    if (pow == 1) {
      return x;
    }
    if (pow < 0) {
      pow = -pow;
      x = 1 / x;
    }
    while (pow >= 1) {
      if (pow % 2 == 1) {
        ans *= x;
      }
      x *= x;
      pow ~/= 2;
    }
    return ans;
  }
}

void main() {
  Solution solution = Solution();
  print(solution.myPow(2, -2));
}
