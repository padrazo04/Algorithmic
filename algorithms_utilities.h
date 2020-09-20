#ifndef ALGORITHMS_UTILITIES_H
#define ALGORITHMS_UTILITIES_H

#include <vector>

using std::vector;


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

#endif