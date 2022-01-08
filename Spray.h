#include <iostream>
#include <stdlib.h>
#include <sstream>
#ifndef Spray_h
#define Spray_h

using namespace std;

const double PI = 3.1415926;

class Spray : public Circle
{
  protected:
    int density;
  public:
    Spray(int, char, int, int);
    void setDensity(int);
    int getDensity();
    void DrawShape();
    void Area();
    ~Spray();
};

#endif