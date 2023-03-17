#include "comparable.h"

#include <string>
#include <iostream>
using namespace std;

Comparable::~Comparable(){}

/**
 * @brief Compare one CompInt to another
 * 
 * @param other Other CompInt object
 * @return This int minus the other int
 */
int CompInt::compareTo(Comparable* other) {
    CompInt* cother = (CompInt*)other;
    return x - cother->x;
}

void CompInt::print() {
    cout << x;
}

/**
 * @brief Return the index of the smallest object in the
 * array of Comparable object references
 * 
 * @param arr Array of object references
 * @param N Length of the Array
 * @return int Index of the object that's the smallest, according to
 *             the Comparable order
 */
int getMinIndex(Comparable** arr, int N) {
    int minIndex = 0;
    // TODO: Fill this in
    return minIndex;
}