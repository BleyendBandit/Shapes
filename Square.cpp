#include "Square.h"

Square::Square(int serialNum, char shapeType, int s = 0) : Rectangle(serialNum, shapeType, s)
{
  setShapeType('Q');
  side = s;
}

void Square::setSide(int s)
{
  side = s;
}

int Square::getSide()
{
  return side;
}

// Draw a square with given side length
void Square::DrawShape()
{
  Area();
  Perim();

  for (int row = 1; row <= side; ++row)
  {
    for (int col = 1; col <= side; ++col)
    {
      cout << "* ";
    }

    cout << endl << endl;
  }
}

// Calcute and print sqaure's area
void Square::Area()
{
  area = pow(side, 2);
  cout << "Area of the square: " << area << endl;
}

// Calcute and print square's perimeter
void Square::Perim()
{
  per = side * 4;
  cout << "Perimeter of the square: " << per << endl;
}

Square::~Square()
{
  
}