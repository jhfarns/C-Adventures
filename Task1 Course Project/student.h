#pragma once
#include <string>
using namespace std;

class student {
	public:
		//get functions
		int get_student_ID();
		string get_first_name();
		string get_last_name();
		string get_email_address();
		int  get_age();
		int get_num_days();

		//set functions	
		void set_student_ID(int param_ID);
		void set_first_name(string param_first);
		void set_last_name(string param_last);
		void set_email_address(string param_email);
		void set_age(int param_age);
		void set_num_days(int day_vals[]);

		//constructors
		student();
		student(int param_ID, string param_first, string param_last, string param_email, int param_age, int day_val[]);
		
		//destructor
		~student();

		//virtual functions
		virtual void print();
		virtual void getDegreeProgram();

	private:
		
		//data members
		int student_ID;
		string first_name;
		string last_name;
		string email_address;
		int age;
		int num_of_days[3];


};