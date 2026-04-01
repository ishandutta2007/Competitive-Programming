#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, m;
  while (~scanf("%d", &n)) {
    if (n == 0) break;
    m = n;
    for (int i = 1; i < n; i++) {
      m = (m * n) % 9;
    }
    if (m == 0)
      printf("%d\n", 9);
    else
      printf("%d\n", m);
  }
  return 0;
}
