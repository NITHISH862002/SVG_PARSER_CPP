

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// template<typename Shape>


class creators
{
      
}
};
class Circle
{
public:
    string cx{};
    string cy{};
    string r{};
    string stroke{};
    string strokeWidth{};
    string fill{};
    static void createNewCircle();
};
class Ellipse
{
public:
    string cx{};
    string cy{};
    string rx{};
    string ry{};
    string style{};
    void createNewEllipse();
};
class Line
{
public:
    string x1{};
    string y1{};
    string x2{};
    string y2{};
    string style{};
    void createNewLine();
};
class Polyline
{
public:
    string points{};
    string style{};
    void createNewPolyline();
};
class Polygon
{
public:
    string points{};
    string style{};
    void createNewPolygon();
};
class Path
{
public:
    string d{};
    void createNewPath();
};



void Circle::createNewCircle()
{
    std::cout << "Circle";
}

void Ellipse::createNewEllipse()
{
    std::cout << "Ellipse";
}

void Line::createNewLine()
{
    std::cout << "Line";
}

void Polyline::createNewPolyline()
{
    std::cout << "Polyline";
}

void Polygon::createNewPolygon()
{
    std::cout << "Polygon";
}

void Path::createNewPath()
{
    std::cout << "Path";
}