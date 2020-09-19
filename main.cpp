// Author: Carlos Freire Caballero
// Enjoy testing with algorithms :)


#include <iostream>

#include "algorithms.h"

using namespace std;


int main() {
    int option;

    cout << "Welcome to \"Testing with Algorithms\" program!" << endl;

    while(true) {
        cout << endl << "OPTIONS" << endl;
        cout << "1. Heapsort sorting algorithm" << endl;
        cout << "2. Determinant by triangulation method" << endl;
        cout << "3. Determinant by recursive algorithm" << endl;
        cout << "4. Quit" << endl;
        cout << "Option: ";

        cin >> option;

        switch(option) {
            case 1:
                heapSortOrdering();
                break;
            case 2:
                iterativeDeterminant();
                break;
            case 3:
                recursiveDeterminant();
                break;
            case 4:
                return 0;
            default:
                cout << endl << "Invalid option" << endl;
        }
    }
}
