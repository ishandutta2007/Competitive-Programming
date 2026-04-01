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
  int n;
  int i;
  char m[12];
  scanf("%d", &n);
  while (n--) {
    scanf("%s", m);
    printf("6%s\n", m + 6);
  }
  return 0;
}