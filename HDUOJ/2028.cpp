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

int gcd(int a, int b) {
  if (!b) return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) { return a / gcd(a, b) * b; }

int main() {
  int n, Lcm;
  int a[1000];
  while (cin >> n) {
    memset(a, 0, 1000 * sizeof(int));  // memset(a,0,sizeof(a));
    for (int i = 0; i < n; ++i) cin >> a[i];
    Lcm = a[0];
    for (int i = 1; i < n; ++i) {
      Lcm = lcm(Lcm, a[i]);
    }
    cout << Lcm << endl;
  }
  return 0;
}