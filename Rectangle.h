#include <iostream>
#include <stdlib.h>
#include <sstream>
#ifndef Rectangle_h
#define Rectangle_h

using namespace std;


class Rectangle : public Shape
{
  protected:
    int height;
    int width;
    int per; // Rectangle's perimeter
  public:
    Rectangle(int, char, int, int);
    void setHeight(int);
    void setWidth(int);
    int getHeight();
    int getWidth();
    void DrawShape();
    void Area();
    virtual void Perim();
    ~Rectangle();
};

#endif