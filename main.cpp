
Window 10, Repl.It

*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>  // pow()

using namespace std;
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "Spray.h"
#include "Triangle.h"
#include "MgrShape.h"

int main()
{
  srand(time(0));
  MgrShape ms;
  ms.displayAll();

  return 0;
}