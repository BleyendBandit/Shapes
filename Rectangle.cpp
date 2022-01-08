#include "Rectangle.h"

Rectangle::Rectangle(int serialNum, char shapeType, int h = 0, int w = 0)
{
  setShapeType('R');
  height = h;
  width = h;
  per = 0;
}

void Rectangle::setHeight(int h)
{
  height = h;
}

void Rectangle::setWidth(int w)
{
  width = w;
}

int Rectangle::getHeight()
{
  return height;
}

int Rectangle::getWidth()
{
  return width;
}

void Rectangle::DrawShape()
{
  Area();
  Perim();

  // Draw a rectangle with given height/width
  cout << string(width, '*' ) << endl;

  for (int i = 0; i < height - 2; i++)
  {
    cout << '*' << string(height - 2, ' ') << '*' << endl;
  }
  
  cout << string(height, '*') << endl << endl;
}

// Calcute and print rectanle's area
void Rectangle::Area()
{
  area = height * width;
  cout << "Area of the rectangle: " << area << endl;
}

// Calcute and print rectanle's perimeter
void Rectangle::Perim()
{
  per = (width * 2) + (height * 2);
  cout << "Perimeter of the rectangle: " << per << endl;
}

Rectangle::~Rectangle()
{

}