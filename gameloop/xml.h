#ifndef XML_H_INCLUDED
#define XML_H_INCLUDED

cout<<"\nLoading map file...";
ifstream file("data/maps/test.tmx");
if(!file.is_open())
    ExitGame("Failed to load 'data/maps/test.tmx'");
stringstream buffer;
cout<<"\nPutting file to buffer...";
buffer << file.rdbuf();
cout<<"\nClosing file...";
file.close();
cout<<"\nConverting file to string...";
string content(buffer.str());
tmap.parse<0>(&content[0]);

//!Loading map
cout<<"\nGetting map info...";
using namespace rapidxml;
xml_node<> *pNode = tmap.first_node();
xml_attribute<> *pAttr = pNode->first_attribute("width");
mapSizeX = atoi(pAttr->value());

#endif // XML_H_INCLUDED
