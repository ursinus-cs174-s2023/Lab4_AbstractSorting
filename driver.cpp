#include <iostream>
#include "comparable.h"

using namespace std;

int main() {
    int x[10] = {1, 7, 4, 3, 7, 1, 2, 0, 0, 9};
    Comparable** cx = new Comparable*[10];
    for (int i = 0; i < 10; i++) {
        cx[i] = new CInt(x[i]);
    }
    cout << getMinIndex(cx, 10) << "\n";
    // Cleanup memory
    for (int i = 0; i < 10; i++) {
        delete cx[i];
    }
    delete[] cx;
    return 0;
}