#include <memory.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;
// 数学公式：1^3+2^3+3^3+....n^3=[n(n+1)/2]^2
int main() {
  LL n, s;
  while (~scanf("%lld", &n)) {
    s = (n * (n + 1) / 2 % 10000) * (n * (n + 1) / 2 % 10000) % 10000;
    printf("%04lld\n", s);
  }
  return 0;
}