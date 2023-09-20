#include <iostream>
#include <fstream>
#include <string>
#include "Menu.cpp"
#include "Creator.cpp"
#include "Counter.cpp"
#include "ConvertingFilestoVectors.cpp"
using namespace std;

int main()
{

    Creator cr;
    Structure str;
    Menu menu;
    Counter ctr;
    ctr.countElements();
    ConvertingFilestoVectors cfv;
    cfv.temporary("../Sample.svg", str);

    int option;

    do
    {
        menu.displayMenu();
        cout << "Enter a Option to proceed further: ";
        cin >> option;

        switch (option)
        {
        case 1:
        {
            bool condition = true;
            while (condition)
            {
                int second_Option;
                int recSize{}, cirSize{}, elliSize{}, lineSize{}, polySize{}, polygSize{}, pathSize{};
                menu.displayCountMenu();
                cout << "Select an option to display the count of an element\\elements : \n";
                cin >> second_Option;
                switch (second_Option)
                {

                case 1:
                {
                    recSize = str.Reactangle.size();
                    cout << "Number of Rectangles : " << recSize << endl;
                }
                break;
                case 2:
                {
                    cirSize = str.Circle.size();
                    cout << "Number of Circles : " << cirSize<< endl;
                }

                break;
                case 3:
                {
                    elliSize = str.Ellipse.size();
                    cout << "Number of Ellipse : " << elliSize<< endl;
                }

                break;
                case 4:
                {
                    lineSize = str.Line.size();
                    cout << "Number of Line : " << lineSize<< endl;
                }

                break;
                case 5:
                {
                    polySize = str.Polyline.size();
                    cout << "Number of Polyline : " << polySize<< endl;
                }

                break;
                case 6:
                {
                    polygSize = str.Polygon.size();
                    cout << "Number of Polygon : " << polygSize<< endl;
                }

                break;
                case 7:
                {
                    pathSize = str.Path.size();
                    cout << "Number of Path : " << pathSize<< endl;
                }
                break;
                case 8:
                {
                    recSize = str.Reactangle.size();
                    cirSize = str.Circle.size();
                    elliSize = str.Ellipse.size();
                    lineSize = str.Line.size();
                    polySize = str.Polyline.size();
                    polygSize = str.Polygon.size();
                    pathSize = str.Path.size();
                    cout << "Number of Rectangles : " << recSize << endl;
                    cout << "Number of Circles : " << cirSize<< endl;
                    cout << "Number of Ellipse : " << elliSize<< endl;
                    cout << "Number of Line : " << lineSize<< endl;
                    cout << "Number of Polyline : " << polySize<< endl;
                    cout << "Number of Polygon : " << polygSize<< endl;
                    cout << "Number of Path : " << pathSize<< endl;
                    cout << "Number of Path : " << pathSize<< endl;
                }
                break;
                case 9:

                    condition = false;
                    break;

                default:
                    break;
                }
            }
        }
        break;
        case 2:
        {
            bool condition = true;
            while (condition)
            {
                int third_Option;
                menu.displayAddNewElement();
                cout << "Select an option to add new element: \n";
                cin >> third_Option;
                switch (third_Option)
                {
                case 1:
                {

                    str.shapes.push_back(cr.createNewRectangle(str));
                }

                break;
                case 2:
                {
                    str.shapes.push_back(cr.createNewCircle(str));
                }

                break;
                case 3:
                {
                    str.shapes.push_back(cr.createNewEllipse(str));
                }

                break;
                case 4:
                {
                    str.shapes.push_back(cr.createNewLine(str));
                }

                break;
                case 5:
                {
                    str.shapes.push_back(cr.createNewPolyline(str));
                }

                break;
                case 6:
                {
                    str.shapes.push_back(cr.createNewPolygon(str));
                }

                break;
                case 7:
                {
                    str.shapes.push_back(cr.createNewPath(str));
                }

                break;
                case 8:

                    condition = false;
                    break;

                default:
                    break;
                }
            }
        }
        break;
        case 3:
        {
            cout << "IMPLEMENT CREATE NEW SVG FILE\n";
        }
        break;

        default:
            break;
        }
    } while (option != 4);

    for (auto &i : str.shapes)
    {
        cout << i.get_tag() << endl;
    }
    

    return 0;
}