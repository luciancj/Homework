#include <iostream>

using namespace std;

int main() {
  int N, C, t;

  cin >> N >> C;

  t = 0;

  while (N >= C) {
    t++;
    if (N % 2 == 1) {
      N++;
    } else {
      N /= 2;
    }
  }
  cout << t << endl;
  return 0;
}
