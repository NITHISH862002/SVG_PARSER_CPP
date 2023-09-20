#include <iostream>

#include "Shape.cpp"
using namespace std;
#ifndef _STRUCTURE__H_
#define _STRUCTURE__H_
class Structure
{
public:
     std::vector<Shape> shapes;

     std::vector<string> Reactangle;
     std::vector<string> Circle;
     std::vector<string> Ellipse;
     std::vector<string> Line;
     std::vector<string> Polyline;
     std::vector<string> Polygon;
     std::vector<string> Path;
     
};
#endif