#ifndef HELPER_HPP
#define HELPER_HPP

#include <iostream>
#include <tuple>
#include <cmath>
#include <cstdlib>
#include "GridItem.hpp"


// function to calculate the euclidean distance between two coordinates.
static double absoluteSquaredDistance (std::tuple<int, int> item1, std::tuple<int, int> item2){
    int x1, x2, y1, y2;

    std::tie (x1, y1) = item1;
    std::tie (x2, y2) = item2;

    //(absolute (x2-x1) + absolute (y2-y1))
    return 0;

}




#endif  