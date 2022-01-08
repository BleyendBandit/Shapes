#include "Shape.h"

Shape::Shape()
{
  shapeType = ' ';
  serialNum = 0;
  area = 0;
}

void Shape::setSerialNum(int sNum)
{
  serialNum = sNum;
}

void Shape::setShapeType(char sType)
{
  shapeType = sType;
}

int Shape::getSerialNum()
{
  return serialNum; 
}

char Shape::getShapeType()
{
  return shapeType;
}

void Shape::DrawShape()
{
  cout << ' ';
}

void Shape::Area()
{
  cout << ' ';
}

Shape::~Shape()
{

}