#include <iostream>
#include <stdlib.h>
#include <sstream>
#ifndef MgrShape_h
#define MgrShape_h

using namespace std;


class MgrShape
{
  protected:
    vector<Shape*> shapes;
  public:
    MgrShape();
    void populateShapeData();
    ~MgrShape();
    void displayAll();
};

#endif