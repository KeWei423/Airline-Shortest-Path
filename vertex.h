#ifndef VERTEX_H
#define VERTEX_H
#include <iostream>
#include <string>
#include <vector>
#include "route.h"

using namespace std;

struct vertex
{
    vertex()
    {
        airportID = visited = fare = NULL;
        name = city = iata = string();
    }

    ~vertex()
    {
        airportID = visited = fare = NULL;
        name = city = iata = string();
        routes.clear();
    }

    int airportID;
    string name, city, iata;
    float fare;
    bool visited;
    vector<route*> routes;
};

#endif // VERTEX_H
