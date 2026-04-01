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
#include <queue>
#include <string>
#include <vector>
typedef long long LL;
using namespace std;

int main() {
  char c;
  string s;

  while (cin >> c >> s) {
    c = tolower(c);
    int n = 0;
    for (int i = 0; i < s.length(); i++)  // s.size()Ò²¿ÉÒÔ¡£¡£¡£
    {
      if (tolower(s[i]) == c) n++;
    }
    printf("%.5f\n", n / float(s.length()));
  }
  return 0;
}