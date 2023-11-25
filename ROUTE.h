#ifndef ROUTE_H
#define ROUTE_H

#include <string>
#include <fstream>
#include <iostream>
using std::string;
using std::istream;
using std::ostream;

class Route 
{
private:
    string startingPoint;
    string finalDestination;
    int number;

public:
    Route();
    ~Route();

    string GetStartingPoint();
    string GetFinalDestination();
    int GetNumber();

    void SetStartingPoint(string startingPoint);
    void SetFinalDestination(string finalDestination);
    void SetNumber(int number);
    
    friend istream& operator >>(istream& is, Route& route);
    friend ostream& operator <<(ostream& os, const Route& route);
};
#endif 
