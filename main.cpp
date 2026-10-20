#include <iostream>
using namespace std;

int main() {
  int h, a;
  cin >> h >> a;
  int c = h % a;
  if (c == 0) {
    cout << h / a << endl;
  } else {
    cout << h / a + 1 << endl;
  }
}
