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
  int n, i, s;
  char a[100];
  cin >> n;
  getchar();  // 注意这里加getchar
  while (n--) {
    s = 0;
    gets(a);
    for (i = 0; i < strlen(a); ++i) {
      if (a[i] < 0) s++;
    }
    // 汉字的ascii码为负值，并且汉字为两个字节，所以除以二；
    cout << s / 2 << endl;
  }
  return 0;
}