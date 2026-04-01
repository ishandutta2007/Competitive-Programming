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
  long long int i, a[52], n;
  a[1] = 1;
  a[2] = 2;
  for (i = 3; i < 51; i++) a[i] = a[i - 1] + a[i - 2];
  while (~scanf("%d", &n)) {
    printf("%lld\n", a[n]);
  }
  return 0;
}
