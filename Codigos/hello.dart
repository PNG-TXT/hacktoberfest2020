void rec(int a) {
  if (a > 0) {
    print("< $a >");
    rec(a - 1);
    print("< $a >");
  }
}

main(List<String> args) {
  rec(20);
  print("Hello Word");
}
