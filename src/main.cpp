#include <iostream>
#include <math.h>
#include <iomanip>

#include "../include/dod.h"
#include "../include/sum.h"
#include "../include/var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
  cout << "x_p = "; cin >> xp;
  cout << "x_k = "; cin >> xk;
  cout << "dx = "; cin >> dx;
  cout << "eps = "; cin >> eps;

  cout << endl;
  cout << "-----------------------------------------------------------" << endl;
  cout << "|" << setw(10) << "x" << " |"
       << setw(15) << "arctg(x)" << " |"
       << setw(15) << "S" << " |"
       << setw(10) << "n" << " |"
       << endl;
  cout << "-----------------------------------------------------------" << endl;

  x = xp;

  while ( x <= xk ){
    sum();
    cout << "|" << setw(10) << setprecision(2) << x << " |"
         << setw(15) << setprecision(5) << atan(x) << " |"
         << setw(15) << setprecision(5) << S << " |"
         << setw(10) << n << " |"
         << endl;
    x += dx;
  }

  cin.get();

  cout << "-----------------------------------------------------------" << endl;

  return 0;
}
