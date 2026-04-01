#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
typedef long long LL;
using namespace std;

int main() {
  int m, n;
  while (cin >> m >> n) {
    if (m >= n) swap(m, n);
    long x = 0, y = 0;
    for (int i = m; i <= n; i++) {
      if (i % 2 == 0)
        x += i * i;
      else
        y += i * i * i;
    }
    cout << x << " " << y << endl;
  }
  return 0;
}
