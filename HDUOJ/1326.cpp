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
  int n;
  int a[101];
  int m = 1;
  while (cin >> n) {
    if (n == 0) break;
    int sum = 0;
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      sum += a[i];
    }
    int avg, ans = 0;
    avg = sum / n;
    for (int i = 0; i < n; i++) {
      if (a[i] > avg) {
        ans += (a[i] - avg);
      }
    }
    cout << "Set #" << m++ << endl
         << "The minimum number of moves is " << ans << "." << endl
         << endl;
  }
  return 0;
}