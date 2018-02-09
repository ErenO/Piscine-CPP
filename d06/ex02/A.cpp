/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eren_ozdek <eren_ozdek@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/11 12:15:31 by eren_ozdek        #+#    #+#             */
/*   Updated: 2017/10/11 13:50:44 by eren_ozdek       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

/* CONSTRUCTORS */

A::A(void) {
  return;
}

A::A(A const & src) {
  *this = src;
  return;
}

A::~A(void) {
  return;
}

/* MEMBERS */

/* OPERATORS */

A& A::operator=(A const &) {
  return *this;
}