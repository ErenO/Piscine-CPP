/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 22:59:26 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/10 23:07:39 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

class Bureaucrat;

/* CONSTRUCTORS */

/* CONSTRUCTORS */

Form::Form(void) : _name("none"), _grade(150)
{
    return;
}

Form::Form(std::string name, int sign, int exec) : _name(name), _sign(sign), _exec(exec) {
    if (sign < 1 || exec < 1)
    throw Form::GradeTooLowException();
    else if (sign > 150 || exec > 150) {
        throw Form::GradeTooHighException();
    } else {
        this->_signB = false;
    }
}

Form::Form(Form const &src)
{
    *this = src;
    return;
}

Form &Form::operator=(Form const &)
{
    this->_signB = getSignB();
    this->_sign = getSign();
    this->_exec = getExec();
    return *this;
}

Form::~Form(void)
{
    return;
}

void Form::setSignB(bool isSigned)
{
    this->_signB = isSigned;
}

bool Form::getSignB() const {
    return this->_signB;
}

int Form::getSign()  const {
    return this->_sign;
}

int Form::getExec() const {
    return this->_exec;
}


void Form::beSigned(Bureaucrat & src) {
    if (src.getGrade() > this->_sign) {
        throw Form::GradeTooLowException();
    } else if (this->_sign == 1) {
        std::cout << src.getName() << "can't sign, the form is already sign" << std::endl;
    } else {
        std::cout << src.getName() << " has signed " << this->_name << std::endl;
    }
    setSignB(true);
}

/* MEMBERS */

std::string Form::getName() const
{
    return this->_name;
}

int Form::getGrade() const
{
    return this->_grade;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::~GradeTooHighException() throw() {}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &src)
{
    *this = src;
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &)
{
    return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return ("Error : Bureaucrade's grade is set too high, set under 150.");
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::~GradeTooLowException() throw() {}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src)
{
    *this = src;
}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &)
{
    return *this;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return ("Error : Bureaucrade's grade is set too low, set above 1.");
}

/* OPERATORS */

std::ostream &operator<<(std::ostream &o, Form const &src)
{
    o << "name: " << src.getName() << " ,grade: " << src.getGrade() << ", signB: "<< src.getSignB() << ", sign:" << src.getSign() << ", exec:" << src.getExec() << std::endl;
    return o;
}
