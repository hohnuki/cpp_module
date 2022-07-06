//
// Created by 大貫　弘貴 on 2022/07/04.
//

#ifndef CPP_MODULE_BUREAUCRAT_H
#define CPP_MODULE_BUREAUCRAT_H

#include <iostream>

class Form;

class Bureaucrat {
private:
	std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	std::string getName();
	int getGrade();
	void signForm(Form form);
};

class GradeTooHighException : public std::exception {};

class GradeTooLowException : public std::exception {};



#endif //CPP_MODULE_BUREAUCRAT_H
