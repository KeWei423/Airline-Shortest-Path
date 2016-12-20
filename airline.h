#ifndef AIRLINE_H
#define AIRLINE_H
#include <iostream>

using namespace std;

struct airline
{
    airline()
    {
        id = 0;
        name = iata = string();
    }

    ~airline()
    {
        id = 0;
        name = iata = string();
    }

    int id;
    string name, iata;
};

#endif // AIRLINE_H
