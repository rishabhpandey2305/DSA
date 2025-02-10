bool tem(List<int> num) {
  List<int> intlist = [];
  for (int i in num) {
    if (intlist.contains(i)) {
      return false;
    }
    intlist.add(i);
  }
  return true;
}

void main() {
  print(tem([1, 2, 3, 4, 5]));
}
