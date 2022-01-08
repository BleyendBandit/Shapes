#include "MgrShape.h"

MgrShape::MgrShape()
{
  populateShapeData();
}

void MgrShape::populateShapeData()
{
  // Read file of shape records
  ifstream file;
  file.open("shaperecords.txt");
  if (file.good())
  {
    int serialNum;
    char shapeType;
    int stat1;
    int stat2;
    int i = 0;

    while (!file.eof())
    {
      file >> shapeType >> serialNum >> stat1 >> stat2;

      // Load new circle into vector
      if (shapeType == 'C')
      {
        shapes.push_back(new Circle(serialNum, shapeType, stat1, stat2));
      }

      // Load new spray into vector
      else if (shapeType == 'S')
      {
        shapes.push_back(new Spray(serialNum, shapeType, stat1, stat2));
      }

      // Load new rectangle into vector
      else if (shapeType == 'R')
      {
        shapes.push_back(new Rectangle(serialNum, shapeType, stat1, stat2));
      }

      // Load new square into vector
      else if (shapeType == 'Q')
      {
        shapes.push_back(new Square(serialNum, shapeType, stat1));
      }

      // Load new into vector
      else if (shapeType == 'T')
      {
        shapes.push_back(new Triangle(serialNum, shapeType, stat1));
      }

      i++;
    }

    file.close();
  }

  else
  {
    cout << "Could not open file!\n";
  }
}

void MgrShape::displayAll()
{
  for (auto i = 0; i < shapes.size(); i++)
  {
    shapes[i] -> DrawShape();
  }
}

MgrShape::~MgrShape()
{
  int i;
  
  // Cleans up vector
  while (shapes[i] != nullptr)
  {
    shapes.erase(shapes.begin(), shapes.end());
  }
}