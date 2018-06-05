#pragma once
#include "degree.h"
#include "student.h"
#include <string>

//Defined subclass of student: Network Student
class NetworkStudent : public Student {
public:
	//Constructor
	NetworkStudent(std::string param_ID, std::string param_first, std::string param_last, std::string param_email, int param_age, int day_val[]);

	//Overide student getDegreeProgram()
	Degree getDegreeProgram();
		

private:

	//define DegreeProgram
	Degree degree_program;
};