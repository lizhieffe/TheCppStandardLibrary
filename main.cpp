#include <iostream>

#include "ContainerTest.h"

using namespace std;

int main() {

    cout << "\nHello, World!\n" << endl;

    ContainerTest dt;
    dt.testVector();
    dt.testDeque();
    dt.testList();
    dt.testSet();
    dt.testMap();
    dt.testUnorderedMap();
    dt.testIterator();

    return 0;
}