// abc462 -> 462
// c0de9ueen -> 09
// a ->何も出力しない
// 前から1つずつ見ていって数字かどうかの判定ができればよい
#include <cctype>
#include <iostream>
#include <ostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (char c : s) {
    if (isdigit(c)) cout << c;
  }
  cout << endl;
  return 0;
}
