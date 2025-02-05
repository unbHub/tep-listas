#include <iostream>
#include "Sally.h"
using namespace std;

int main()
{
    Sally sallyObject;
    Sally *sallyPointer = &sallyObject;

    // Access by object 
    sallyObject.printCrap();
    // Access by pointer
    sallyPointer->printCrap();

}
