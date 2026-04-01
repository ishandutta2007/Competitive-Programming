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
  int t;
  cin >> t;
  while (t--) {
    LL n, s, d;
    cin >> n;
    s = n * n * n;
    d = (n + 1) * (n + 1) * (n + 1);
    printf("%lld %lld\n", s, d);
  }
  return 0;
}