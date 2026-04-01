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
typedef long long LL;
using namespace std;

int main() {
  int t, b;
  char a[500];
  scanf("%d", &t);
  while (t--) {
    scanf("%s%d", a, &b);
    int k = -1;
    for (int i = 0; i < strlen(a); i++) {
      if (a[i] == '.') {
        k = i;
        break;
      }
    }
    if (b > strlen(a) - k - 1) {
      puts("0");
      continue;
    }
    printf("%c\n", a[k + b]);
  }
  return 0;
}