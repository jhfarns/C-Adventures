#include <string>
#include "student.h"
#include "softwareStudent.h"
#include "securityStudent.h"
#include "roster.h"
#include "networkStudent.h"
#include "degree.h"
#include <iostream>
#include <sstream>

void Roster::add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram) {
	Student* student = NULL;
	
	int dayval[3] = {daysInCourse1,daysInCourse2,daysInCourse3};

	switch (degreeProgram) {
	case SECURITY:
		student = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, dayval);
		break;
	case NETWORKING:
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
	std::cout << "Error: Student with ID " << studentID << " was not found" << std::endl;
}

void Roster::printAll() {
	
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it) {
		(*it)->print();
	}

}

void Roster::printDaysInCourse(std::string studentID) {
	bool foundStudent = false;
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it) {
		

		if ((*it)->get_student_ID() == studentID) {
			int* numDays = (*it)->get_num_days();
			std::cout << numDays[0] << " " << numDays[1] << " " << numDays[2] << std::endl;
			foundStudent = true;
		}

	}
	if (!foundStudent) {
		std::cout << "Error studentID does not exist. Please try again" << std::endl;
	}

}

void Roster::printInvalidEmails() {
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it) {

		bool atSign = false;
		bool period = false;
		bool space = false;

		std::string currentEmail = (*it)->get_email_address();
		
		for (std::string::iterator sit = currentEmail.begin(); sit != currentEmail.end(); ++sit) {
			
			switch(*sit) {
			
				case '@':
					atSign = true;
					break;

				case '.':
					period = true;
					break;

				case ' ':
					space = true;
					break;

				default:
					break;
			}
		}

		if (!atSign || !period || space) {
			std::cout << currentEmail << " ";
		}

	}
	std::cout << std::endl;
}

void Roster::printByDegreeProgram(int degreeProgram) {

	std::cout << "Students for program ";
		
	switch (degreeProgram) {
		case SECURITY:
			std::cout << "SECURITY";
			break;

		case NETWORKING: 
			std::cout << "NETWORKING";
			break;

		case SOFTWARE: 
			std::cout << "SOFTWARE";
			break;

		default :
			break;
	}
			
	std::cout << ":" << std::endl << std::endl;
	
	for (std::vector<Student*>::iterator it = class_roster_array.begin(); it != class_roster_array.end(); ++it) {

		if ((*it)->getDegreeProgram() == degreeProgram) {

			(*it)->print();
		}

	}
}

std::vector<Student*> Roster::get_class_roster_array() {
	return class_roster_array;
}


const int NUM_STUDENTS = 5;
const std::string studentData[NUM_STUDENTS] =
{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,James,Farnsworth,jfarn13@wgu.edu,24,50,24,22,SOFTWARE" };

std::vector<std::string> studentDataVector(std::string studentStringData) {
	
	std::vector<std::string> fields;
	std::string field;
	std::istringstream ss(studentStringData);


	
	while (getline(ss, field, ',')) {
		fields.push_back(field);
	}

	return fields;
}



int main() {

	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "Scripting and Programming Applications (UG, C867, FPP1-0318)" << std::endl;
	std::cout << "Programming Language Used: C++" << std::endl;
	std::cout << "StudentID: #000682498" << std::endl;
	std::cout << "Student Name: James Farnsworth" << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;

	Roster* classRoster = new Roster;
	
	for (int i = 0; i < NUM_STUDENTS; ++i) {

		std::vector<std::string> fields = studentDataVector(studentData[i]);

		int age = atoi(fields[4].c_str());
		int days1 = atoi(fields[5].c_str());
		int days2 = atoi(fields[6].c_str());
		int days3 = atoi(fields[7].c_str());
		Degree degreeProgram;


		if (fields[8] == "SECURITY") {
			degreeProgram = SECURITY;
		}
		else if (fields[8] == "NETWORK" ) {
			degreeProgram = NETWORKING;
		}
		else { 
			degreeProgram = SOFTWARE;
		}
		
		classRoster->add(fields[0], fields[1], fields[2], fields[3], age, days1, days2, days3, degreeProgram);
	}

	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "All students are listed below: " << std::endl << std::endl;
	classRoster->printAll();
	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;

	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "All invalid emails are listed below: " << std::endl << std::endl;
	classRoster->printInvalidEmails();
	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;

	std::vector<Student*> classRosterVect = classRoster->get_class_roster_array();

	//loop through classRosterArray and for each element:

	std::cout << "---------------------------------------------------------------------" << std::endl;
	std::cout << "Average days in courses for all the students are listed below: " << std::endl << std::endl;
	for (std::vector<Student*>::iterator it = classRosterVect.begin(); it != classRosterVect.end(); ++it){
		
		std::cout << "Days for " << (*it)->get_first_name() << " " << (*it)->get_last_name() << " is: ";

		classRoster->printDaysInCourse((*it)->get_student_ID());

		std::cout << std::endl;

	}
	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;

	std::cout << "---------------------------------------------------------------------" << std::endl;
	classRoster->printByDegreeProgram(SOFTWARE);
	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;

	std::cout << "---------------------------------------------------------------------" << std::endl;
	classRoster->remove("A3");
	classRoster->remove("A3");
	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;
	std::cout << "---------------------------------------------------------------------" << std::endl << std::endl;

	system("pause");
	return 0;
}