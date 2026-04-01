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
  int t, N, a[100], b[100], i, k, flag, j;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &N);

    memset(a, 0, sizeof(a));
    memset(b, 0, sizeof(b));

    for (i = 0; i < N; i++) {
      scanf("%d", &a[i]);
      scanf("%d", &b[a[i]]);
    }
    sort(a, a + N);
    for (i = 0; i < N; i++) {
      for (j = 0; j < b[a[i]]; j++) {
        printf(">+");
        for (k = 0; k < a[i] - 2; k++) printf("-");
        printf("+>\n");
      }
      printf("\n");
    }
  }
  return 0;
}