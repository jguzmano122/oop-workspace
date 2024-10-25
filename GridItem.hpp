#ifndef GRIDITEM_HPP
#define GRIDITEM_HPP

#include <iostream>
#include <tuple>
#include <cmath>
#include <cstdlib>

class GridItem {

protected:

    int _x;
    int _y;
    int _width;
    int _height;

public:

    // Constructors 
GridItem(int x, int y, int width, int height) {
    _x = x;
    _y = y;
    _width = width;
    _height = height;
}

GridItem() {
    _x = 0;
    _y = 0;
    _width = 0;
    _height = 0;

}

void setCoordinates(int x, int y) {
    _x = x;
    _y = y;

}

std::tuple <int, int> getCoordinates(){
    int a,b;
    return std::make_tuple (a,b);


}

int getGridWidth(){
    return _width; 

}


int getGridHeight(){
    return _height;

}
/*
int getActiveGridItemCount() {

}


virtual ~GridItem()
*/

}; 

#endif