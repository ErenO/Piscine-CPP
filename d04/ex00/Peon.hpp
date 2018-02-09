/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/06 11:16:05 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/06 11:27:37 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP
#include "Victim.hpp"

class Peon: public Victim {
public:
    Peon(void);
    Peon(Peon const & src);
    Peon(std::string name);
    ~Peon(void);

    virtual void getPolymorphed() const;
    Peon & operator=(Peon const & rhs);

private:
};

#endif
