


/*Question 1, Part 2 - Aggregation
Design a class called AssetPortfolio. An AssetPortfolio contains assets. It has a maximum number of Assets and a list of Assets that currently belong to the portfolio. Asset objects can be added to the portfolio as long as the portfolio is not full.

Your AssetPortfolio class must provide the following public methods:

AssetPortfolio();           // default constructor capacity of zero assets
AssetPortfolio(int size);   // constructor for a portfolio of given size

// returns the number of assets which are in the portfolio
int get_num_assets(); 

// returns true if any asset in the portfolio is of the specified product type
// otherwise returns false
bool has_asset(std::string product); 

Asset *get_assets();       // returns the array of assets of the portfolio

// returns true and adds new asset to the portfolio if the portfolio is not full
// otherwise returns false
bool add_asset(Asset new_asset);

~AssetPortfolio();  // destructor
You may add any other methods and any state variables you want, but the methods listed above must be available and public. The default AssetPortfolio size is 0.

Write AssetPortfolio.h and AssetPortfolio.cpp files to declare and implement the AssetPortfolio class.

Write a main-1-2.cpp file that tests all of your methods (behaviours) to make sure they are all working correctly.

Submit all 3 files.

 */