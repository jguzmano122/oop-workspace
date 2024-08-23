#include <iostream>
#include <string>
#include "Asset.h"

 // a default constructor 
Asset::Asset(){
    value = 0;
    product_type = "";

;}                         
 
// a constructor that takes the product type  and value
Asset::Asset(int new_value, std::string new_product_type) {

        value = new_value;
        product_type = new_product_type;

    };

// default Destructor
Asset:: ~Asset(){

    //delete[]


} ;



/*Question 1, Part 1 - Basic Object
Design a class called Asset. Assets need to store state about the type of the financial asset and the value of the asset.

Asset must provide the following public behaviours (methods):

Asset();                            // a default constructor 

// a constructor that takes the product type  and value
Asset(int value, std::string product_type);      

std::string get_product_type();    // returns the financial asset type 
int get_value();                   // returns the the value of asset
~Asset();                          // A default destructor
You may add any other methods and any state variables you want, but the methods listed above must be available and public.

The default constructor should set the type of asset to the empty string "" and  the value of the asset to zero.

Write Asset.h and Asset.cpp files to declare and implement the Asset class.

Write a main-1-1.cpp file that tests all of your methods (behaviours) to make sure they are all working correctly.

Submit all 3 files.*/