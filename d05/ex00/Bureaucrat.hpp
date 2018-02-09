/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eren_ozdek <eren_ozdek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 22:36:44 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/09 22:46:35 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
public:
  Bureaucrat(void);
  Bureaucrat(std::string name, int grade);
  Bureaucrat(Bureaucrat const & src);
  ~Bureaucrat(void);

  std::string getName() const;
  int getGrade() const;

  class GradeTooLowException : public std::exception {
    public:
      virtual ~GradeTooLowException() throw();
      GradeTooLowException();
      GradeTooLowException(GradeTooLowException const & src);
      GradeTooLowException & operator=(GradeTooLowException const &);
      virtual const char* what () const throw();
  };

  class GradeTooHighException : public std::exception {
    public:
      virtual ~GradeTooHighException() throw();
      GradeTooHighException();
      GradeTooHighException(GradeTooHighException const &src);
      GradeTooHighException &operator=(GradeTooHighException const &);
      virtual const char *what() const throw();
  };
  Bureaucrat& operator=(Bureaucrat const & rhs);
private:
  std::string _name;
  int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif