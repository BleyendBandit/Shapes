#include "Spray.h"

const double PI = 3.1415926;

Spray::Spray(int serialNum, char shapeType, int radius, int d = 0) : Circle(serialNum, shapeType, radius, d)
{
  setShapeType('S');
  density = d;
}

void Spray::setDensity(int d)
{
  density = d;
}

int Spray::getDensity()
{
  return density;
}

// Draw spray pattern with given radius and density (percentage filled in)
void Spray::DrawShape()
{
  Area();
  cout << "Circumference of the spray: ";
  Circum();

  int fill = 0;
    
  for (double y = -((double)radius) - 1; y <= ((double)radius) + 2; y++)
  {
    for (double x = -((double)radius) - 1; x <= ((double)radius) + 2; x += 0.5)
    {
      if (pow(x, 2) + pow(y, 2) <= (pow(radius, 2) + 1.5) && (pow(x, 2)  + pow(y, 2) >= (pow(radius, 2) - 1.5)))
      {
        cout << " ";
      }

      else
      {
        if (sqrt(pow(x, 2) + pow(y, 2)) <= radius)
        {
          if (rand() % 100 <= density)
          {
            cout << "*";
            fill++;
          }

          else
          {
            cout << " ";
          }
        }

        else
        {
          cout << " ";
        }
      }
    }

    cout << '\n';
  }
}

// Calcute and print spray's area
void Spray::Area()
{
  area = PI * pow(radius, 2);
  cout << "Area of the spray: " << area << endl;
}

Spray::~Spray()
{
  
}