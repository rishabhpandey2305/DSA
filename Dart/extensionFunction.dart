extension DateTimeExtension on DateTime {
  bool get isWeekend =>
      this.weekday == DateTime.saturday || this.weekday == DateTime.sunday;
}

void main() {
  DateTime today = DateTime.now();
  print(today.isWeekend ? "Weekend hai!" : "Work day hai!");
}
