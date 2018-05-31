#pragma once
#include <vector>
#include"degree.h"


class Roster {
	public:
		//required set get functions for Roster class
		void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreePrograms degreeProgram);
		void remove(int studentID);
		void printall();
		void printDaysInCourse(std::string studentID);
		void printInvalidEmails();
		void printByDegreeProgram(int degreeProgram);
		
		//Constructor
		Roster();

		//Deconstructor
		~Roster();

	private:
		std::vector<Student*> class_roster_array;

};