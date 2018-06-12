#pragma once
#include <vector>
#include"degree.h"


class Roster {
	public:
		//required set get functions for Roster class
		void add(std::string studentID, std::string firstName, std::string lastName, std::string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degreeProgram);
		void remove(std::string studentID);
		void printAll();
		void printDaysInCourse(std::string studentID);
		void printInvalidEmails();
		void printByDegreeProgram(int degreeProgram);
		std::vector<Student*> get_class_roster_array();
		
		//Constructor

		//Deconstructor

	private:
		std::vector<Student*> class_roster_array;

};