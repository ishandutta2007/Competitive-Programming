#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
typedef long long LL;
using namespace std;
int f(int n) {
  if (n == 1)
    return 1;
  else if (n == 2)
    return 4;
  else
    return (f(n - 1) + 1) * 2;
}
int main() {
  int n;
  int ans;
  while (cin >> n) {
    ans = f(n);
    printf("%d\n", ans);
  }
  return 0;
}