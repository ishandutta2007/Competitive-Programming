#include <time.h>

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
  long long int f[55];
  f[1] = 1;
  f[2] = 2;
  for (int i = 3; i < 55; i++) {
    f[i] = f[i - 1] + f[i - 2];
  }
  int t;
  scanf("%d", &t);
  while (t--) {
    int n, m;
    scanf("%d%d", &n, &m);
    printf("%lld\n", f[m - n]);
  }
  return 0;
}