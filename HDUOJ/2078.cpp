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
  int t, m, n, i;
  int a[50];
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d", &n, &m);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    sort(a, a + n);
    int s = (100 - a[0]) * (100 - a[0]);
    printf("%d\n", s);
  }

  return 0;
}