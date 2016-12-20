#include <iostream>
#include "airlinepath.h"

using namespace std;

int main()
{
    airlinePath ap;
    ap.openXML("/home/allen/School/CS8/finaldata/Resources/XML/finalData.xml");
    ap.run();
    return 0;
}
