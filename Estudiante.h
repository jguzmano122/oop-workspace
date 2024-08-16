#include <iostream>
#include <string>

using namespace std;

    // declarando la Clase de tipo Estudiante que es un Object
class Estudiante{
        // atributos privados para que no se puedan cambiar
    private:
        string name;
        int ID;
        double grade;

    public: //  atributos publicos para que se cambien desde el exterior

        // ** Constructors: here declaring Constructors and 'later' definition
        // Constructor used to determine behaviour(s) we went for this Object
    Estudiante (); // this could be the default constructor when nothing is passed to avoid error and rubbish assigned
    Estudiante (string s_name, int s_ID, double s_grade); // Constructor to assign values to a new Object from the exterior
    Estudiante (string s_name, int s_ID);

        // functions to interact with the Object's attributes
    string get_name () {return name;}
    int get_ID() {return ID;}
    double get_grade () {return grade;}
        // functions to modify attributes of the Objects type Estudiante 
    void set_ID (int new_ID) {ID = new_ID;}
    void set_name (string new_name) {name = new_name;}
    void set_grade (double new_grade) {grade = new_grade;}

}; 

Estudiante::Estudiante(){

        name = ""; 
        ID = 0;
        grade = 0.0;
    };

Estudiante::Estudiante (string s_name, int s_ID, double s_grade){

        name = s_name; 
        ID = s_ID; 
        grade = s_grade;
    };

Estudiante::Estudiante (string s_name, int s_ID){

        name = s_name; 
        ID = s_ID; 
        grade = 0;
    };