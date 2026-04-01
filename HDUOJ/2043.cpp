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
  char a[100];
  int sum, i, n, b, c, d, e;
  cin >> n;
  getchar();
  while (n--) {
    b = 0, c = 0, d = 0, e = 0;
    gets(a);
    if (strlen(a) >= 8 && strlen(a) <= 16) {
      for (i = 0; i < strlen(a); ++i) {
        if (a[i] >= '0' && a[i] <= '9') b = 1;
        if (a[i] >= 'a' && a[i] <= 'z') c = 1;
        if (a[i] >= 'A' && a[i] <= 'Z') d = 1;
        if (a[i] == '~' || a[i] == '!' || a[i] == '@' || a[i] == '#' ||
            a[i] == '$' || a[i] == '%' || a[i] == '^')
          e = 1;
      }
      sum = b + c + d + e;
      if (sum >= 3)
        cout << "YES" << endl;
      else
        cout << "NO" << endl;
    } else
      cout << "NO" << endl;
  }

  return 0;
}