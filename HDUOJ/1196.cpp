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
  int n, a, t;
  while (cin >> n) {
    if (n == 0) break;
    t = 1;
    while (n) {
      if (n % 2 == 1) break;  // 如果是奇数，最后结果肯定等于1
      n = n / 2;
      t = t * 2;
    }
    printf("%d\n", t);
  }
  return 0;
}
