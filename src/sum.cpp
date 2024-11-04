#include <math.h>
#include "../include/dod.h"
#include "../include/sum.h"
#include "../include/var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum(){
  n = 0;
  a = x;
  S = a;
  do {
    n++;
    R = (-1.0) * x * x * (2 * n - 1) / (2 * n + 1);
    a *= R;
    S += a;
  } while (abs(a) >= eps);
}