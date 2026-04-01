#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int gcd(int a, int b) {
  if (!b) return a;
  return gcd(b, a % b);
}
int main() {
  int n, m;
  while (cin >> n >> m) {
    printf("%d\n", n * m / gcd(n, m));
  }
  return 0;
}
