//
//  Degree.h
//  c867-student-roster
//
//  Created by carson harder-hyde on 11/12/20.
//

#ifndef Degree_h
#define Degree_h
#pragma once
#include <string>
enum DegreeType { SECURITY, NETWORK, SOFTWARE };

/*Parralell array pops out a string for each book type; use book type as an index*/
static const std::string degreeTypeStrings[] = { "SECURITY", "NETWORK", "SOFTWARE" };

#endif /* Degree_h */
/*
 C.  Define an enumerated data type DegreeProgram for the degree programs containing the data type values SECURITY, NETWORK, and SOFTWARE.
  
 Note: This information should be included in the degree.h file.
 */
