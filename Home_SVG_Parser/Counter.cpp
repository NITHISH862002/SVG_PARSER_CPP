#include "pugiconfig.hpp"
#include "pugixml.cpp"
#include "pugixml.hpp"
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace pugi;
using namespace std;

class Counter
{
public:
    map<string, int> values;

    int countElements()

    {
        xml_document doc;
        if (doc.load_file("../Sample.svg"))
        {
            xml_node svg_node = doc.child("svg");
            if (svg_node)
            {
                for (xml_node node = svg_node.first_child(); node; node = node.next_sibling())
                {
                    string s = node.name();
                    auto mk = values.find(s);
                    if (mk == values.end())
                    {
                        values[s] = 1;
                    }
                    else
                    {
                        values[s] = (mk->second) + 1;
                    }
                }
                // auto it = values.begin();
                // while (it != values.end())
                // {
                //     cout << it->first << " = " << it->second << endl;
                //     it++;
                // }
                return 0;
            }
            else
            {
                cerr << "No 'svg' element found in the SVG file." << endl;
                return 1;
            }
        }
        else
        {
            cerr << "Failed to load File." << endl;
            return 1;
        }

    }

    int getCount(std::string name)
    {
        auto pos = values.find(name);
        if (pos == values.end())
        {
            // handle the error
            cout<<"SORRY\n";
            return 0;
        }
        else
        {
            return pos->second;
            
        }
        
    }


    void moveMapElementsToRespectiveVectors()
    {

    }
};
