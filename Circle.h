#include <iostream>
#include <stdlib.h>
#include <sstream>
#ifndef Circle_h
#define Circle_h

using namespace std;

const double PI = 3.1415926; 

class Circle : public Shape
{
  protected:
    int radius;
    int dummy; // Placeholder for constructor
    double circum;
  public:
    Circle(int, char, int, int);
    void setRadius(int);
    int getRadius();
    void DrawShape();
    void Area();
    void Circum();
    ~Circle();
};

#endif