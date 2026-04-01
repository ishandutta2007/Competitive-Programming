#include <memory.h>

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
  LL t;
  LL a, b;
  LL ans;
  cin >> t;
  while (t--) {
    scanf("%lld %lld", &a, &b);
    ans = (LL)(a + b) % 100;
    printf("%lld\n", ans);
  }
  return 0;
}