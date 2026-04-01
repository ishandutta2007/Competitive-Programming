#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
typedef long long LL;
using namespace std;
int main() {
  int n;
  scanf("%d", &n);
  getchar();
  while (n--) {
    char c;
    int a, b;
    scanf("%c%d%d", &c, &a, &b);
    getchar();  // 记得把回车消除，不然会WA
    switch (c) {
      case '+':
        printf("%d\n", a + b);
        break;
      case '-':
        printf("%d\n", a - b);
        break;
      case '*':
        printf("%d\n", a * b);
        break;
      case '/':
        a % b == 0 ? printf("%d\n", a / b)
                   : printf("%.2lf\n", (double)a / (double)b);
        break;
    }
  }

  return 0;
}
