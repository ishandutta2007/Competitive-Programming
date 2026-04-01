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
  int cnt, i, n;
  int grade, score[1001];
  while (cin >> n) {
    if (n == 0) break;
    cnt = 0;
    for (i = 0; i < n; i++) {
      scanf("%d", &score[i]);
    }
    scanf("%d", &grade);

    for (i = 0; i < n; i++) {
      if (grade == score[i]) cnt++;
    }

    printf("%d\n", cnt);
  }
  return 0;
}
