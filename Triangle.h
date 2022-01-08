#include <iostream>
#include <stdlib.h>
#include <sstream>
#ifndef Triangle_h
#define Triangle_h

using namespace std;


class Triangle : public Shape
{
  protected:
    int base;
  public:
    Triangle(int, char, int);
    void setBase(int);
    int getBase() const;
    void DrawShape();
    ~Triangle();
};

#endif