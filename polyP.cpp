// ** started until 12) as an example of Inheritance and Overriding
// in  15) it's explained 'Static' and 'Dynamic' binding

#include <iostream>
#include <string> 

using namespace std;

class A {

    //** 1) this 'private' declared here just to show as an exercise that private data members cannot be accessed by Inhereted classes
        // private:
        //     int _s; // data member for this Class
        
    // 2) 'protected' data member to be able to access only from Base and Derived Classes
    protected:
        int _s; // data member for this Class
    
    // 3) Constructors
    public:
        A (int s) : _s(s){} // Constructor to initialise '_s'
        A() : A (-1){} // Another constructor to initialise '_s' to -1

            // 4) function to print for first example but change for Polymorphism example
            //void print() {
        
        // 15) adding 'virtual' keyword so we tell the compiler Not to do "Static Binding", so use instead
            //"" Dyanmic Binding" which is decide what "function" definition (or other method) to use based on the calling object
        virtual void print() {
            cout << "S = " << this -> _s << endl; 
        
        }
};

    // 5) creating a Class B inheriting data members and functions from A
class B : public A {

    private: 
        double _k; 
    
    public:
        // 6) Constructor initialising the data member 's' inherited from A 
        B (int s, double k) : A(s), _k(k){}   // here using a Constructor from A to initialise data member 's' inherited from A
            // and here initialising private data member '_k' from this Class
        
        // 7) another Constructor to initialise B's data member to '0'
        B() : B (0, 1.5) {}
        void print() {
            
            cout << "S = " << this -> _s << " K = " << this -> _k << endl; 

            // **this cannot be done - '->' need to be used
            //cout << "S = " << s << " K = " << k << endl; 
        
        }


};

// 17) creando objeto C tipo A con un nuevo argumento 'string' y usando un Constructor from A to initialise str
// and stating its own 'print' function with its own string parameter
class C : public A {
        private:
            string _str;
        public: 
            C (int s, string str) : A (s), _str (str){}
            C () : C (2, "null"){}
            void print (){
                cout << " S = " << this -> _s << " Str = " << this -> _str << endl;

            }

    };

int main (){

    // 8) creating a Class object 'b1' and passing arguments using one of the Constructors from B
    B b1 (500, 122);
    
    // 9) using function 'print' form Class B
    b1.print();

    // 10) using the 'print' function from A
    b1.A::print();


    // 11) creando another object
    B b2;

    // 12 usando el default Constructor
    b2.print();

    //* Now starting with Polymorphism example

        // 13) 
        A *a1; // declaring a pointer of type A
        B b3 (25, 10.777); // creating an object type B

        // 14) 
        //** "a pointer to a Base Class can point at an object from a Derived Class" **
        a1 = &b3; // assigning the object type B to the pointer type A

        // 16) ** see 15)
        a1->print(); // as 'a1' is type A, in 'Static Binding' it will use A's functions although it's pointing to a B object
                     // but in 'Dynamic Binding' it will use B's functions because it's pointing to a B's object

        // 18) creando una array con pointers como elementos apuntando a objetos de la misma Class pero de differente subclass
        A* a [3];
        a[0] = new A (); // assignando dynamically pointer element of the Class A
        a[1] = new B (); // assignando dynamically pointer element of the sub-Class B
        a[2] = new C (); // assignando dynamically pointer element of the sub-Class C

        // 19) to access/print this element we need to know it is a pointer and it'll call the function 'print' according to
        // the type of object it is pointing to:
        a[0]->print();  // in this case A           
         a[1]->print();  // in this case B
          a[2]->print();  // in this case C

    //** if we don't have a 'print' function in a Derived class, it will print using the Base Class Constructor with its locally given parameters

    return 0;
}

 