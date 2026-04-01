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
  double n, m;
  while (scanf("%lf%lf", &n, &m) != EOF) {
    printf("%.2lf\n", 1 / n);
  }
  return 0;
}