#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

    // Class declaring
class Musician {    

    // declaring data members of the Class
private:
            
        std::string instrument;
        int experience;
    

public:
    Musician();                  // a default constructor 
// a constructor that takes the instrument played and the years of experience
Musician(std::string instrument, int experience);      


    // functions
std::string get_instrument();    // returns the instrument played
int get_experience();       // returns the number of years experience

    //**JG's
            void set_instrument (std::string new_Inst){
                
                instrument = new_Inst;

            }

            void set_Exp (int new_Exp){
                
                experience = new_Exp;

            }


};

#endif


