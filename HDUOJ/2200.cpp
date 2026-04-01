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

double c(double a)  // a!
{
  double i, s = 1;
  for (i = 1; i <= a; i++) s = s * i;
  return s;
}
double f(double n, double i) {
  return c(n) / (c(n - i) * c(i));  // n!/(n-i)!*i!
}
int main() {
  double i, n, sum;
  while (scanf("%lf", &n) != -1) {
    sum = 0;
    for (i = 2; i <= n; i++) sum = sum + (i - 1) * f(n, i);
    printf("%.0f\n", sum);
  }
  return 0;
}
