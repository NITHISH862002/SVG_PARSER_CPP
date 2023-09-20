#include <iostream>
#include <fstream>
#include <sstream>
#include "pugixml.cpp"
#include <vector>
#include <string>
#include "Path.cpp"

class ConvertingFilestoVectors
{
public:
    std::vector<std::string> strr;

    void temporary(std::string s, Structure &str)
    {
        char *x = (char *)s.c_str();
        std::ifstream svgFile(x);
        std::string svgContent((std::istreambuf_iterator<char>(svgFile)), std::istreambuf_iterator<char>());

        // Parse the SVG content using PugiXML
        pugi::xml_document doc;
        pugi::xml_parse_result result = doc.load_string(svgContent.c_str());

        // Check for parsing errors
        if (result.status != pugi::xml_parse_status::status_ok)
        {
            std::cerr << "Failed to parse SVG file. Error description: " << result.description() << std::endl;
            std::cout << "false";
        }

        // Get the root node (in this case, the <svg> tag)
        pugi::xml_node root = doc.child("svg");

        // Iterate through child nodes of the <svg> tag and print each element separately
        for (pugi::xml_node node = root.first_child(); node; node = node.next_sibling())
        {
            // Serialize the individual XML element into a string
            std::stringstream tagStream;
            node.print(tagStream);

            // Get the tag as a string
            std::string tag = tagStream.str();
            strr.emplace_back(tag);

            // Print the entire XML element as a string
            // std::cout << tag<< std::endl;
        }

        for (auto i : strr)
        {
            if (i.find("rect") != std::string::npos)
            {
                
                str.Reactangle.push_back(i);
                str.shapes.push_back(Rectangle());
            }
            else if (i.find("circle") != std::string::npos)
            {
                str.Circle.push_back(i);
                str.shapes.push_back(Circle());

            }
            else if (i.find("ellipse") != std::string::npos)
            {
                str.Ellipse.push_back(i);
                str.shapes.push_back(Ellipse());

            }
             else if (i.find("polyline") != std::string::npos)
            {
                str.Polyline.push_back(i);
                str.shapes.push_back(Polyline());

            }
            else if (i.find("line") != std::string::npos)
            {
                str.Line.push_back(i);
                str.shapes.push_back(Line());

            }
           
            else if (i.find("polygon") != std::string::npos)
            {
                str.Polygon.push_back(i);
                str.shapes.push_back(Polygon());

            }
            else if (i.find("path") != std::string::npos)
            {
                str.Path.push_back(i);
                str.shapes.push_back(Path());

            }
        }
    }
};