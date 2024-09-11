#include <iostream>
#include <string>
#include <vector>
//#include "Course.h"
#ifndef UNIVERSITY_H
#define UNIVERSITY_H

using namespace std;

class University {

    protected:
        string name;
        string location;
        //vector <course*> Course;

    public:
        University ();
        void addCourse (int id, string name);
        // Course* newCourse = new Course (id, name);

};

#endif