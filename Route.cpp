#include "Route.h"
Route::Route()
{

};
Route::~Route()
{

};

string Route::GetStartingPoint()
{
    return startingPoint;
};

string Route::GetFinalDestination()
{
    return finalDestination;
};

int Route::GetNumber()
{
    return number;
};

void Route::SetStartingPoint(string startingPoint)
{
    this->startingPoint = startingPoint;
};

void Route::SetFinalDestination(string finalDestination)
{
    this->finalDestination = finalDestination;
};

void Route::SetNumber(int number)
{
    this->number = number;
};
    
istream& operator >>(istream& is, Route& route)
{
    string startingPoint;
    string finalDestination;
    int number; 
    
    cout << "Starting point: ";
    is >> startingPoint;
    route.SetStartingPoint(startingPoint);
    
    cout << "Final destination: ";
    is >> finalDestination;
    route.SetFinalDestination(finalDestination);

    cout << "Number: ";
    is >> number;
    route.SetNumber(number);

    return is;
};

ostream& operator <<(ostream& os, const Route& route)
{
    os << "Starting point: " << route.startingPoint << endl;
    os << "Final destination: " << route.finalDestination << endl;
    os << "Number: " << route.number << endl;

    return os;
};

