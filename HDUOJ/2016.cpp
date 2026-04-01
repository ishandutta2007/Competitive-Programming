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
  int n, a[100] = {0};
  while (~scanf("%d", &n), n) {
    int i, min;
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    min = 0;
    for (i = 0; i < n; i++) {
      if (a[i] <= a[min]) {
        swap(i, min);  // 记录最小值得下标
      }
    }
    swap(a[0], a[min]);  // 交换值

    for (i = 0; i < n; i++) {
      if (i == n - 1)
        printf("%d\n", a[i]);
      else
        printf("%d ", a[i]);
    }
  }
  return 0;
}