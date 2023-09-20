#include <iostream>
#include <string>
#include "Path.cpp"
using namespace std;

class Creator
{
public:
    Rectangle createNewRectangle(Structure &str)
    {
        std::string width{}, height{}, style{};
        std::cout << "Rectangle\n";
        cout << "Enter width: ";
        cin >> width;
        cout << "\nEnter height: ";
        cin >> height;
        cout << "\nEnter style ";
        cin >> style;
        string rectangleElement = "<rect width=\"" + width + "\" height=\"" + height + "\" style=\"" + style + "\"/>";
        str.Reactangle.push_back(rectangleElement);
        return Rectangle(width, height, style);
    }
    Circle createNewCircle(Structure &str)
    {
        string cx, cy, r, stroke, strokewidth, fill;
        cout << "Enter cx:\n";
        cin >> cx;
        cout << "Enter cy:\n";
        cin >> cy;
        cout << "Enter r:\n";
        cin >> r;
        cout << "Enter stroke:\n";
        cin >> stroke;
        cout << "Enter strokewidth:\n";
        cin >> strokewidth;
        cout << "Enter fill:\n";
        cin >> fill;
        string circleElement = "<circle cx=\"" + cx + "\" cy=\"" + cy + "\" r=\"" + r + "\" stroke=\"" + stroke + "\" stroke-width=\"" + strokewidth + "\" fill=\"" + fill + "\" />";
        str.Circle.push_back(circleElement);
        return Circle(cx, cy, r, stroke, strokewidth, fill);
    }
    Ellipse createNewEllipse(Structure &str)
    {
        string cx, cy, rx, ry, style;
        cout << "Enter cx:\n";
        cin >> cx;
        cout << "Enter cy:\n";
        cin >> cy;
        cout << "Enter rx:\n";
        cin >> rx;
        cout << "Enter ry:\n";
        cin >> ry;
        cout << "Enter style:\n";
        cin >> style;
        string ellipseElement = "<ellipse cx=\"" + cx + "\" cy=\"" + cy + "\" rx=" + rx + "\" ry=\"" + ry + "\"style=\"" + style + "\"/>";
        str.Ellipse.push_back(ellipseElement);
        return Ellipse(cx, cy, rx, ry, style);
    }
    Line createNewLine(Structure &str)
    {
        string x1, y1, x2, y2, style;
        cout << "Enter x1:\n";
        cin >> x1;
        cout << "Enter y1:\n";
        cin >> y1;
        cout << "Enter x2:\n";
        cin >> x2;
        cout << "Enter y2:\n";
        cin >> y2;
        cout << "Enter style:\n";
        cin >> style;
        string lineElement = "<line x1=\""+x1+"\" y1=\""+y1+"\" x2=\""+x2+"\" y2=\""+y2+"\"style="+style+"\" />";
        str.Line.push_back(lineElement);
        return Line(x1, y1, x2, y2, style);
    }
    Polygon createNewPolygon(Structure &str)
    {

        string points, style;
        cout << "Enter points:\n";
        cin.ignore();
        getline(cin, points, '\n');
        // cin >> points;
        cout << "Enter style:\n";
        // cin >> style;
        getline(cin, style, '\n');
        string polygonElement ="<polygon points=\""+points+"\" style=\""+style+"\" />";
         
        str.Polygon.push_back(polygonElement);

        return Polygon(points, style);
    }
    Polyline createNewPolyline(Structure &str)
    {
        string points, style;
        cin.ignore();
        cout << "Enter points:\n";
        getline(cin, points);
        // cin >> points;
        cout << "Enter style:\n";
        getline(cin, style);
        string polylineElement ="<polyline points=\""+points+"\" style="+style+" />";
        str.Polyline.push_back(polylineElement);
        return Polyline(points, style);
    }
    Path createNewPath(Structure &str)
    {
        string d;
        cout << "Enter d:\n";
        cin.ignore(); // Clear the newline left in the buffer
        getline(cin, d);
        // cout << d;
        string  lineElement ="<path d=\""+d+"\"/>";
        str.Path.push_back(lineElement);
        return Path(d);
    }
};