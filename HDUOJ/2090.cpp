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
  char str[20];
  double m, n, s = 0;
  while (scanf("%s%lf%lf", str, &m, &n) != EOF) {
    s += m * n;
  }
  printf("%.1lf\n", s);
  return 0;
}