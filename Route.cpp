#include "Route.h"
Route::Route()
{
    std::cout << "hello" << std::endl; 

};
Route::~Route()
{

};

string Route::GetStartingPoint()
{
    return this->startingPoint;
};

string Route::GetFinalDestination()
{
    return this->finalDestination;
};

int Route::GetNumber()
{
    return this->number;
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
    
istream& operator >>(istream& is, Route& D)
{

};

ostream& operator <<(ostream& os, const Route& D)
{

};

