#include "securityStudent.h"

SecurityStudent::SecurityStudent(std::string param_ID, std::string param_first, std::string param_last, std::string param_email, int param_age, int day_val[])
	:Student (param_ID, param_first, param_last, param_email, param_age, day_val) {

	degree_program = SECURITY;
}

Degree SecurityStudent::getDegreeProgram() {
	return degree_program;
}