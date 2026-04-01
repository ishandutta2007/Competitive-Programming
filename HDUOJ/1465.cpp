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
// 错排公式a[i]=(i-1)*(a[i-1]+a[i-2]);a[1]=0;a[2]=1;
// f[n]=(n-1)*(f[n-2]+(n-2)*(f[n-3]+(n-3).......))
// f[n-1]=(n-2)*(f[n-3]+(n-3).......)
// 所以，f[n]=(n-1)*(f[n-1]+f[n-2])
int main() {
  LL a[21];
  int i, n;
  a[1] = 0;
  a[2] = 1;
  while (cin >> n) {
    for (i = 3; i < n + 1; i++) {
      a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
    }
    printf("%lld\n", a[n]);
  }
  return 0;
}