#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;
const int maxn = 100;

int main() {
  LL t, a, b;
  LL n;
  cin >> t;
  while (t--) {
    cin >> n;
    LL sum = 0;
    for (LL i = 1; i <= n; i++) {
      a = 1 + 2 * (i - 1);
      sum = (sum + a) % 10000;
    }
    printf("%lld\n", sum);
  }
  return 0;
}