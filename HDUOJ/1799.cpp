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
int arr[2005][2005];
int main() {
  int t, i, j;
  scanf("%d", &t);
  for (i = 1; i <= 2002; i++) {
    arr[i][i] = 1;  // c(i,i)
    arr[i][0] = 0;  // ±ß½ç
    for (j = 1; j < i; j++)
      arr[i][j] = (arr[i - 1][j] + arr[i - 1][j - 1]) %
                  1007;  // c(m,n)==c(m-1,n-1)+c(m-1,n)
  }
  while (t--) {
    int n, m;
    scanf("%d%d", &m, &n);
    printf("%d\n", arr[n + 1][m + 1]);
  }
  return 0;
}