#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>  // pow()

using namespace std;

#ifndef Shape_h
#define Shape_h

// Base class for all the shpae classes
// Defines what a shape is
class Shape
{
  protected:
    char shapeType; // Type of shape
    int serialNum; // Serial number
    double area;
  public:
    Shape();
    void setSerialNum(int); // Serial number
    void setShapeType(char); // Set shape type
    int getSerialNum(); // Get serial number
    char getShapeType(); // Get shape type
    virtual void DrawShape() = 0; // Draw shape
    virtual void Area() = 0; // Calculates/prints shape's area
    ~Shape();
};

#endif