#pragma once
#include "degree.h"
#include "student.h"
#include <string>

//Defined subclass of student: Network Student
class SoftwareStudent : public student {
public:

	//Overide student getDegreeProgram()
	void getDegreeProgram();
	void setDegreeProgram();

private:

	//define DegreeProgram
	degreePrograms degree_program;
};