/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eren_ozdek <eren_ozdek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/09 22:59:19 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/10 13:21:52 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
# include <iostream>

class Bureaucrat;

class Form
{
public:
  Form(void);
  Form(std::string name, int grade);
  Form(std::string name, int sign, int exec);
  Form(Form const &src);
  ~Form(void);

  std::string getName() const;
  int getGrade() const;

  void setSignB(bool isSigned);

  bool getSignB() const;
  int getSign() const;
  int getExec() const;
  
  void beSigned(Bureaucrat & src);
  class GradeTooLowException : public std::exception
  {
  public:
    virtual ~GradeTooLowException() throw();
    GradeTooLowException();
    GradeTooLowException(GradeTooLowException const &src);
    GradeTooLowException &operator=(GradeTooLowException const &);
    virtual const char *what() const throw();
  };

  class GradeTooHighException : public std::exception
  {
  public:
    virtual ~GradeTooHighException() throw();
    GradeTooHighException();
    GradeTooHighException(GradeTooHighException const &src);
    GradeTooHighException &operator=(GradeTooHighException const &);
    virtual const char *what() const throw();
  };
  Form &operator=(Form const &rhs);

private:
  std::string _name;
  bool _signB;
  int _sign;
  int _exec;
  int _grade;
};

std::ostream &operator<<(std::ostream &o, Form const &src);

#endif

// #ifndef FORM_HPP
// #define FORM_HPP

// #include <iostream>
// #include "Bureaucrat.hpp"

// class Bureaucrat;

// class Form
// {

// private:
//   const std::string _name;
//   std::string _target;
//   bool _sign;
//   const int _signGrade;
//   const int _executeGrade;

// public:
//   Form(void);
//   Form(Form const &src);
//   Form(std::string name, int signGrade, int executeGrade);
//   virtual ~Form(void);
//   bool getSign(void) const;
//   void setSign(bool boolean);
//   void setTarget(std::string target);
//   std::string getTarget(void) const;
//   std::string getName(void) const;
//   int getSignGrade(void) const;
//   int getExecutionGrade(void) const;
//   virtual void execute(Bureaucrat const &) const = 0;

//   void beSigned(Bureaucrat &bureaucrat);
//   Form &operator=(Form const &rhs);

//   class GradeTooHighException : public std::exception
//   {
//   public:
//     GradeTooHighException();
//     GradeTooHighException(GradeTooHighException const &);
//     ~GradeTooHighException() throw();
//     GradeTooHighException &operator=(GradeTooHighException const &);
//     virtual const char *what() const throw();
//   };

//   class GradeTooLowException : public std::exception
//   {
//   public:
//     GradeTooLowException();
//     GradeTooLowException(GradeTooLowException const &);
//     ~GradeTooLowException() throw();
//     GradeTooLowException &operator=(GradeTooLowException const &);
//     virtual const char *what() const throw();
//   };
// };

// std::ostream &operator<<(std::ostream &o, Form &rhs);

// #endif