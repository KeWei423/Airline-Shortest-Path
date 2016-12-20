#ifndef ROUTE_H
#define ROUTE_H
#include <iostream>
#include <string>
#include <vector>
#include "airline.h"

using namespace std;

struct route
{
    route()
    {
        destinationID = distance = 0;
    }

    ~route()
    {
        destinationID = distance = 0;
        airlines.clear();
    }

    int destinationID;
    double distance;
    vector<airline*> airlines;
};


#endif // ROUTE_H
