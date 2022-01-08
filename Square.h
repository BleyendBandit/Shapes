#include <iostream>
#include <stdlib.h>
#include <sstream>
#ifndef Rectangle_h
#define Rectangle_h

using namespace std;

class Square : public Rectangle
{
  protected:
    int side;
  public:
    Square(int, char, int);
    void setSide(int);
    int getSide();
    void DrawShape();
    void Area();
    void Perim();
    ~Square();
};

#include <iostream>
#include <stdlib.h>
#include <sstream>
#ifndef Rectangle_h
#define Rectangle_h
