#include <iostream>
#include <tuple>
#include <cmath>
#include <cstdlib>
#include "GridItem.hpp"

using namespace std;

int main (){


    GridItem myGrid;

    int d, f; 

    std::make_tuple (d,f) = myGrid.getCoordinates();

    cout << "d= " << d << endl;








    return 0;
}