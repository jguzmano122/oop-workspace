#ifndef UTILS_H
#define UTILS_H

#include <iostream>
#include <tuple>
#include <cmath>
#include <cstdlib>

class Utils {

    public: 

        // Returns a random position within a grid represented by gridWidth and gridHeight as a std::tuple<int, int>.
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){

    // ** MOMORIZE THIS STRUCTURE ** // 
        int x = rand () % gridWidth;
        int y = rand () % gridHeight;

        return std :: make_tuple (x, y);

    } 
        // Returns the Euclidean distance between two positions given as pos1 and pos2 as a double.
    static double calculateDistance(std::tuple <int, int> pos1, std::tuple<int, int> pos2) {

        int x1, y1, x2, y2;

        std :: tie (x1, y1) = pos1;
        std :: tie (x2, y2) = pos2;

        return std :: sqrt (std :: pow (x1 - x2, 2) + pow (y1 - y2, 2));
        

    }






};

#endif  // end header guard