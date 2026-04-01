#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
using namespace std;
int main() {
  int n, a[100010];
  while (cin >> n) {
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << a[n / 2] << endl;
  }
  return 0;
}
