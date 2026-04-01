#include <memory.h>

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;
int main() {
  int i, max;
  int flag = 0;
  char a[100];
  while (gets(a)) {
    max = 0;
    for (i = 0; a[i] != '\0'; i++) {
      if ((a[i] - '0') % 2 == 0) max = max + (a[i] - '0');
    }

    if (flag != 0) printf("\n");  // 注意输出格式
    printf("%d\n", max);
    flag = 1;
  }
  return 0;
}