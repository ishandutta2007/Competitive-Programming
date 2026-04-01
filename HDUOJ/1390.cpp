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
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[50], k = 0;
    while (n) {
      a[k++] = n % 2;
      n = n >> 1;
    }
    for (int i = 0; i < k; i++)
      if (a[i]) {
        cout << i;
        if (i != k - 1) cout << " ";
      }
    cout << endl;
  }
  return 0;
}