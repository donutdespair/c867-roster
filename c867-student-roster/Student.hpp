//
//  Student.hpp
//  c867-student-roster
//
//  Created by carson harder-hyde on 11/12/20.
//

#ifndef Student_hpp
#define Student_hpp

#pragma once
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Degree.h"
using std::string;
using std::cout;
//using std::endl;

class Student
{
public://need to define constant
    const static int daysArray = 3;//the size of an array must be constant; each student has 3 course t\lengths in days
    
private://accessible to object only
    string studentID;
    string fName;
    string lName;
    string email;
    int age;
    int days[daysArray];
    DegreeType degreeType;//enum; customary to give type names upper camel case, lower camel case for instances (variables)
public://methods
    Student();//parameterless constructor - sets to default values - always include
    Student(string studentID, string fName, string lName, string email, int age, int days[], DegreeType degreeType);//full constructor
    ~Student();//destructor
    
    //getters or accessors
    string getID();
    string getTitle();
    string getFName();
    string getLName();
    string getEmail();
    int getAge();
    int* getDays();
    DegreeType getDegreeType();//array name and pointer are similar but an array name is always a constant and a pointer is only a constant if declared as such
    
    //setters or mutators
    void setID(string studentID);
    void setFName(string FName);
    void setLName(string LName);
    void setEmail(string email);
    void setAge(int age);
    void setDays(int days[]);
    void setDegreeType(DegreeType dt);;//do not use int since this is a special data type
    
    static void printHeader(); //displays header for data
    
    void print();//displays "this" data (specific book/student for PA project)
};



#endif /* Student_hpp */

/*1. Create the class Student  in the files student.h and student.cpp, which includes each of the following variables:
 •  student ID
 •  first name
 •  last name
 •  email address
 •  age
 •  array of number of days to complete each course
 •  degree program*/
