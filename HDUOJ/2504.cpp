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
  int a, b, c, d, e, f, m, flag;
  cin >> m;
  while (m--) {
    cin >> a >> b;
    c = b + b;
    while (__gcd(a, c) != b) {
      c = c + b;  // ÈÃcÖð½¥Ôö´ó
    }
    printf("%d\n", c);
  }
  return 0;
}