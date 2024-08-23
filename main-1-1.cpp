#include <iostream>
#include <string>
#include "Asset.h"

using namespace std;

int main () {

    Asset newAsset2;

    cout << newAsset2.get_value() <<  " " << newAsset2.get_product_type() << endl;

    Asset newAsset (11, "pez");
    
    cout << newAsset.get_value() <<  " " << newAsset.get_product_type() << endl;

    return 0;

    
}