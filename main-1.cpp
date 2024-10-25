#include <iostream>
#include <string>
#include <ctime>
#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"
#include <tuple>

using namespace std;


int main() {
    // Generate random positions

     
// practicing 'pair'
std::pair <int, std::string> myPair (1, "yo");
std::cout << myPair.first << myPair.second << std::endl;


    // line to use real random numbers + 
    std::srand(static_cast<unsigned int>(std::time(nullptr)));


    int x1, x2, y1, y2;

    std::tuple position1 = Utils :: generateRandomPos(10, 10);
    std::tuple position2 = Utils :: generateRandomPos(10, 10);

    std :: tie (x1, y1) = position1;
    std :: tie (x2, y2) = position2;

    cout << "Position 1: (" << x1 << ", " << y1 << ")" << endl;
    cout << "Position 2: (" << x2 << ", " << y2 << ")" << endl;

    double distancePts = Utils :: calculateDistance(position1, position2); 

    cout << "Distancia entre puntos: " << distancePts << endl;

    return 0;
}