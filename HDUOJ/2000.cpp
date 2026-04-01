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
  char a, b, c;
  while (cin >> a >> b >> c) {
    if (a > b) {
      swap(a, b);
    }
    // 注意这里呀，WA了一次。。。
    if (b > c) {
      swap(b, c);
      if (a > b) swap(a, b);
    }
    printf("%c %c %c\n", a, b, c);
  }
  return 0;
}
