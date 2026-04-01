#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>
typedef long long LL;
using namespace std;

int main() {
  int n, i;
  int s[60] = {0, 1, 2, 3, 4};
  while (~scanf("%d", &n) && n) {
    if (n > 4)
      for (i = 5; i <= n; i++) {
        s[i] = s[i - 1] + s[i - 3];
      }
    printf("%d\n", s[n]);
  }
  return 0;
}