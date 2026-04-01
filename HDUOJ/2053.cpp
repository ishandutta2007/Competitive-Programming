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
  int n, k, i;
  while (scanf("%d", &n) != EOF) {
    k = 0;
    for (i = 1; i <= n; i++) {
      if (n % i == 0) k++;
    }
    if (k % 2 == 0)
      printf("0\n");
    else
      printf("1\n");
  }
  return 0;
}