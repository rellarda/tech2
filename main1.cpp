#include <iostream>
#include "Route.h"

int main(void)
{
    int n;
    Route* routes;

    while (true)
    {
        cout << "0. Create routes." << endl;
        cout << "1. Print information about the route. " << endl;
        cout << "2. Print routes." << endl;
        cout << "3. Edit route. " << endl;
        cout << "4. Change route to new. " << endl;
        cout << "5. Delete route. " << endl;
        cout << "6. Exit." << endl;

        int choice;
        cin >> choice;
        switch (choice)
        {
            case 0:
            {
                cout << "How many routes? ";
                cin >> n;
                routes = new Route[n];
                for (int i = 0; i < n; ++i)
                {
                    cin >> routes[i];
                }
                
                //sorting
                for (int i = 0; i < (n - 1); ++i)
                {
                    for (int j = 0; j < (n - i- 1); ++j)
                    {
                        if (routes[j].GetNumber() > routes[j + 1].GetNumber())
                        {
                            swap(routes[j], routes[j + 1]);
                        }
                    }
                }
                break;
            }
            case 1:
            {
                std::string searchPoint;
                std::cout << "Enter the point to search for: ";
                std::cin >> searchPoint;

                bool found = false;

                for (int i = 0; i < n; ++i) {
                if (routes[i].GetStartingPoint() == searchPoint ||
                                routes[i].GetStartingPoint() == searchPoint) 
                {
                    std::cout << routes[i] << std::endl;
                    found = true;
                }
            }

            if (!found) 
                std::cout << "No routes found for the specified point." << std::endl;
    
            }   
                break;
            case 2:
            {
                cout << "Printing routes..." << endl;
                for (int i = 0; i < n; ++i)
                {
                    cout << routes[i];
                }
            }
                break;
            case 3:
            {
                int routeToEdit;
                cout << "Route to edit? ";
                cin >> routeToEdit;
                cin >> routes[routeToEdit];
            }
                break;
            case 4:
            {
                int routeToChange;
                cout << "Route to change? ";
                cin >> routeToChange;
                cin >> routes[routeToChange];
 
            }
                break;
            case 5:
            {
                int routeToDelete;
                cout << "Route to delete? ";
                cin >> routeToDelete;
                cin >> routes[routeToDelete];

            }
                break;
            case 6:
                cout << "Exiting..." << endl;
                return 0;
            default:
                return 0;
        }
    }
    return 0;
}
