#pragma once
#include <string>

class Student {
	public:
		//get functions
		int get_student_ID();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_email_address();
		int  get_age();
		int get_num_days();

		//set functions	
		void set_student_ID(int param_ID);
		void set_first_name(std::string param_first);
		void set_last_name(std::string param_last);
		void set_email_address(std::string param_email);
		void set_age(int param_age);
		void set_num_days(int day_vals[]);

		//constructors
		Student();
		Student(int param_ID, std::string param_first, std::string param_last, std::string param_email, int param_age, int day_val[]);
		
		//destructor
		virtual ~Student();

		//virtual functions
		virtual void print();
		virtual void getDegreeProgram() = 0;

	private:
		static const size_t NUMDAYS = 3;
		
		//data members
		int student_ID;
		std::string first_name;
		std::string last_name;
		std::string email_address;
		int age;
		int num_of_days[NUMDAYS];


};
