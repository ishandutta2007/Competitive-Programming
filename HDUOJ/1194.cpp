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
  int T, x, y;
  int n, m;
  cin >> T;
  while (T--) {
    scanf("%d%d", &n, &m);
    if (n < m)
      printf("impossible\n");

    else if ((n + m) % 2 != 0) {
      printf("impossible\n");  // 这两个数的和与差同奇偶
    }

    else {
      x = (n + m) / 2;
      y = (n - m) / 2;
      if (x < y) swap(x, y);
      printf("%d %d\n", x, y);
    }
  }
  return 0;
}
