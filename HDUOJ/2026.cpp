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
  int i;
  char a[100];
  while (gets(a)) {
    for (i = 0; i < strlen(a); ++i) {
      if (i == 0)
        // 对字符串进行加减，直接对应相应字母，a的ascii码为97，A的ascii码为65，差32；
        a[0] = a[0] - 32;
      if (a[i] == ' ') a[i + 1] = a[i + 1] - 32;
      cout << a[i];
    }
    cout << endl;
  }
  return 0;
}