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
int main() {
  for (int a = 6; a <= 200; a++)
    for (int b = 2; b < a; b++)
      for (int c = b; c < a; c++)
        for (int d = c; d < a; d++)
          if (a * a * a == b * b * b + c * c * c + d * d * d)
            cout << "Cube = " << a << ", Triple = (" << b << "," << c << ","
                 << d << ")" << endl;
  return 0;
}