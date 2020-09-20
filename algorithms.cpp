// Maybe a .cpp for each algorithm would be cleaner?

#include <vector>

#include "algorithms_utilities.h"

using std::vector;


void heapSortOrdering();
void iterativeDeterminant();
void recursiveDeterminant();


void heapSortOrdering() {
    int minimum, maximum, increment;
    vector<double> realTimes;
    vector<double> numberOfElements;
    vector<double> coefficients;

    askForLimits(minimum, maximum, increment);

    for(int i = minimum ; i <= maximum ; i += increment) {
        vector<int> items(i);
        numberOfElements.push_back(i);

        fillVector(items);
        heapSort(items);
        isOrdered(items);
    }


    saveToFile(numberOfElements, realTimes);

    fitNLogNCurve(numberOfElements, realTimes, coefficients);
    calculateEstimatedTimes();
    calculateDeterminationCoefficient();
    saveTimesToFile();

    showResults();
    calculateEstimatedTimeNLogN();
}


void iterativeDeterminant() {
    
}


void recursiveDeterminant() {

}
