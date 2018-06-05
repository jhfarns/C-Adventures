#include <string>
#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "roster.h"
#include "networkStudent.h"
#include "degree.h"
#include <iostream>

const std::string studentData[] = {
"A1","John","Smith","John1989@gm ail.com","20","30","35","40","SECURITY",
"A2","Suzan","Erickson","Erickson_1990@gmailcom","19","50","30","40","NETWORK",
"A3","Jack,Napoli","The_lawyer99yahoo.com","19","20","40","33","SOFTWARE",
"A4","Erin","Black","Erin.black@comcast.net","22","50","58","40","SECURITY",
"A5","James","Farnsworth","jfarn13@wgu.edu","23","50","40","33","SOFTWARE"};



void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram) {
	Student* student = NULL;
	
	int dayval[3] = {daysInCourse1,daysInCourse2,daysInCourse3};

	switch (degreeProgram) {
	case SECURITY:
		student = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, dayval);
		break;
	case NETWORK:
		student = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, dayval);
		break;
	case SOFTWARE:
		student = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, dayval);
		break;
	}

	class_roster_array.push_back(student);
}

void Roster::remove(std::string studentID) {
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it) {
		if ((*it)->get_student_ID() == studentID) {
			class_roster_array.erase(it);
			return;
		}
	}
	std::cout << "Error: Student ID does not exist" << std::endl;
}

void Roster::printAll() {
	
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it) {
		(*it)->print();
	}

}

int main() {

	Roster roster;
	
	roster.add("A2", "Suzan", "Erickson", "Erickson_1990@gmailcom", 19, 50, 30, 40, NETWORK);
	roster.printAll();

	system("pause");
	return 0;
}