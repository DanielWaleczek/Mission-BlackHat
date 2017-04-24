#ifndef XML_H_INCLUDED
#define XML_H_INCLUDED

//!RapidXML NOT WORKING!!
/*stringstream sstemp;
string stemp;
ifstream file("a:/Mission-BlackHat/data/maps/test.tmx");

//if(TestMap.id==0)
//    file.open("data/maps/test.tmx");

if(DEBUG) cout<<"\nLoading map file...";
if(!file.is_open())
    ExitGame("Failed to load 'data/maps/test.tmx'");
stringstream buffer;
if(DEBUG) cout<<"\nPutting file to buffer...";
buffer << file.rdbuf();
if(DEBUG) cout<<"\nClosing file...";
file.close();
if(DEBUG) cout<<"\nConverting file to string...";
string content(buffer.str());
doc.parse<0>(&content[0]);*/

/*//!Loading map
if(DEBUG) cout<<"\nGetting map info...";
xml_node<> *pRoot = tmap.first_node();
if(DEBUG) cout<<"\n  >map >width: ";
xml_node<> *pNode = tmap.first_node();
xml_attribute<> *pAttr = pNode->first_attribute("width");
TestMap.mapWidth = atoi(pAttr->value());
if(DEBUG) cout<<TestMap.mapWidth;

if(DEBUG) cout<<"\n  >map >height: ";
pAttr = pNode->first_attribute("height");
TestMap.mapHeight = atoi(pAttr->value());
if(DEBUG) cout<<TestMap.mapHeight;

if(DEBUG) cout<<"\n  >map >tilewidth: ";
pAttr = pNode->first_attribute("tilewidth");
TestMap.tileWidth = atoi(pAttr->value());
if(DEBUG) cout<<TestMap.tileWidth;

if(DEBUG) cout<<"\n  >map >tileheight: ";
pAttr = pNode->first_attribute("tileheight");
TestMap.tileHeight = atoi(pAttr->value());
if(DEBUG) cout<<TestMap.tileHeight;

short int i=1;
for(pNode=pRoot->first_node("tileset"); pNode; pNode=pNode->next_sibling("tileset"))
{
    if(DEBUG) cout<<"\n  >tileset >source: ";

    pAttr = pNode->first_attribute("name");
    sstemp<<pAttr->value();
    stemp=sstemp.str();
    sstemp.str("");
    sstemp<<"data/terrain/"<<stemp<<".png";
    TestMap.TileSource[i] = sstemp.str();
    TestMap.TileBitmap[i] = al_load_bitmap(sstemp.str().c_str());
    if(DEBUG) cout<<TestMap.TileBitmap[i];
    sstemp.str("");
    i++;
}
*/


//!Loading textures...
cout<<"\nLoading textures...";

#endif // XML_H_INCLUDED
