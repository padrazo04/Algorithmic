#include <iostream>
#include <algorithm>
#include <vector>

using std::vector;
using std::cout;
using std::cin;


void askForLimits(int &min, int &max, int &incr);
void fillVector(vector<int> &items);
bool heapSort(vector<int> &items);
bool isOrdered(const vector<int> &items);
void saveToFile(vector<double> &numberOfElements, vector<double> &realTimes);
void fitNLogNCurve(const vector<double> &numberOfElements, 
                   const vector<double> &realTimes, 
                   vector<double> coefficients
                   );
double summation();
void calculateEstimatedTimes();
double calculateDeterminationCoefficient();
void saveTimesToFile();
void showResults();
void calculateEstimatedTimeNLogN();


void askForLimits(int &min, int &max, int &incr) {
    cout << "Introduce the initial number of elements: ";
    cin >> min;

    cout << "Introduce the maximum number of elements: ";
    cin >> max;

    cout << "Introduce the increment: ";
    cin >> incr;
}


void fillVector(vector<int> &items) {
    for(int i=0; i<items.size(); i++)
        items.push_back(rand() % 10000000);
}


bool heapSort(vector<int> &items) {
    std::sort_heap(items.begin(), items.end());

    return true; //return false?
}


bool isOrdered(const vector<int> &items) {
    return std::is_sorted(items.begin(), items.end());;
}


void saveToFile(vector<double> &numberOfElements, vector<double> &realTimes) {
    // TODO
}


void fitNLogNCurve(const vector<double> &numberOfElements, 
                   const vector<double> &realTimes, 
                   vector<double> coefficients) {
    // TODO
}


double summation() {
    // TODO

    return 0.0;
}


void calculateEstimatedTimes() {
    // TODO
}


double calculateDeterminationCoefficient() {
    // TODO

    return 0.0;
}


void saveTimesToFile() {
    // TODO
}


void showResults() {
    // TODO
}


void calculateEstimatedTimeNLogN() {
    // TODO
}
