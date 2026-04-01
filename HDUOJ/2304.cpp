
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
using namespace std;

int main() {
  int n, m, i, a[11], sum;
  scanf("%d", &n);
  while (n--) {
    sum = 0;
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
      scanf("%d", &a[i]);
      sum += a[i];
    }
    printf("%d\n", sum - m + 1);
  }
  return 0;
}