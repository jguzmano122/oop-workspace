#ifndef ASSET_H
#define ASSET_H
#include <iostream>
#include <string>


// 1) declaring object of the class Asset and its data members
class Asset {

    private:
        int value;
        std::string product_type;

    public:

// 2) default constructor 
    Asset(); 

   
// 3) a constructor that takes the product type and value
    Asset(int new_value, std::string new_product_type); 

// 4) functions to access/assign data members of the Class
        // returns the financial asset type 
    std::string get_product_type(){
        
        return product_type;
    };

   // returns the financial asset type 
    int get_value(){

       return value;

};

~Asset();                          // A default destructor


};

#endif