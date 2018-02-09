/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eren_ozdek <eren_ozdek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 22:36:40 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/10 22:30:45 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* CONSTRUCTORS */

Bureaucrat::Bureaucrat(void) : _name("None"), _grade(150) {
  return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
  if (grade < 1) {
    throw Bureaucrat::GradeTooLowException();
  } else if (grade > 150) {
    throw Bureaucrat::GradeTooHighException();
  } else {
    this->_grade = grade;
  }
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) {
  *this = src;
  return ;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &) {
  return *this;
}

Bureaucrat::~Bureaucrat(void) {
  return ;
}

/* MEMBERS */

std::string Bureaucrat::getName() const {
  return this->_name;
}

int Bureaucrat::getGrade() const {
  return this->_grade;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) {
  *this = src;
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &) { 
  return *this;
}

const char * Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Error : Bureaucrade's grade is set too high, set under 150.");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &src) {
  *this = src;
}


Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &) {
  return *this;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
  return ("Error : Bureaucrade's grade is set too low, set above 1.");
}

/* OPERATORS */


std::ostream & operator<<(std::ostream & o, Bureaucrat const & src) {
  o << "name: " << src.getName() << " ,grade: " << src.getGrade() << std::endl; 
  return o;
}