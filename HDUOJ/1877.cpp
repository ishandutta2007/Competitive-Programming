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
  int m, a, b;
  int arr[10000] = {0};
  while (cin >> m >> a >> b) {
    int c = a + b;
    int i = 0;
    if (c == 0)
      printf("0\n");
    else {
      while (c > 0) {
        arr[i++] = c % m;
        c = c / m;
      }
      for (int j = i - 1; j >= 0; --j) {
        cout << arr[j];
      }
      cout << endl;
    }
  }
  return 0;
}