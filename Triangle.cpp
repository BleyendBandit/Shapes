#include "Triangle.h"

Triangle::Triangle(int serialNum, char shapeType, int b = 0)
{
  setShapeType('T');
  base = b;
}

void Triangle::setBase(int b)
{
  base = b;
}

int Triangle::getBase() const
{
  return base;
}

void Triangle::DrawShape()
{
  // Draw triange with given base size
  base++;
  for (int i = 0; i < base; i++)
  {
    for (int j = base; j > i; j--)
    {
      cout << ' ';
    }  
    
    for (int k = base; k <= 2 * i; k++)
    {
      cout << "*";
    }

    cout << endl;
  }
}

Triangle::~Triangle()
{

}