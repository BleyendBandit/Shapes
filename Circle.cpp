#include "Circle.h"

const double PI = 3.1415926;

Circle::Circle(int serialNum, char shapeType, int r = 0, int dum = -1)
{
  setShapeType('C');
  radius = r;
  dummy = dum;
}

void Circle::setRadius(int r)
{
  radius = r;
}

int Circle::getRadius()
{
  return radius;
}

// Draw circle with given radius
void Circle::DrawShape()
{
  Area();
  cout << "Circumference of the circle: ";
  Circum();

  for (double y = -((double)radius) - 1; y <= ((double)radius) + 2; y++)
  {
    for (double x = -((double)radius) - 1; x <= ((double)radius) + 2; x += 0.5)
    {
      if (pow(x, 2) + pow(y, 2) <= (pow(radius, 2) + 1.5) && (pow(x, 2)  + pow(y, 2) >= (pow(radius, 2) - 1.5)))
      {
        cout << "*";
      }

      else
      {
        cout << " ";
      }
    }

    cout << '\n';
  }
}

// Calcute and print circle's area
void Circle::Area()
{
  area = PI * pow(radius, 2);
  cout << "Area of the circle: " << area << endl;
}

// Calcute and print circle's circumference
void Circle::Circum()
{
  circum = 2 * PI * radius;
  cout << circum;
}

Circle::~Circle()
{
  
}